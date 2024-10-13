#include "scene.h"
#include "vec.h"
#include "ray.h"
#include "cmath"
#include <vector>

bool hit_record::front_face(const ray& r) const {
    return normal.dot(r.direction()) < 0;
}

bool Hittable::hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) {}

Sphere::Sphere(vec3 center, double radius): center(center), radius(radius) {}

bool Sphere::hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) {
    vec3 delta = r.source_point() - center;
    vec3 dir = r.direction();
    double dot = delta.dot(dir);
    bool hits = ((delta.length_squared() - dot*dot / dir.length_squared()) <= radius*radius);
    if (!hits) return false;
    double hit_t = -(dot + std::sqrt((dot*dot + dir.length_squared() * (radius*radius - delta.length_squared())))) / dir.length_squared();
    hits = hits && (hit_t > ray_tmin && hit_t < ray_tmax);
    if (hits) {
        rec.hit_t = hit_t;
        rec.hit_point = r.at(hit_t);
        rec.normal = unit_vector(rec.hit_point - center);
    }
    return hits;
}

HittableList::HittableList() {}

HittableList::HittableList(Hittable* obj): hittable_list{std::vector<Hittable*>(1, obj)} {}

bool HittableList::hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) {
    bool hits = false;
    for (Hittable* obj: hittable_list) {
        hits = obj->hit(r, ray_tmin, ray_tmax, rec);
        if (hits) {
            break;
        }
    }
    return hits;
}

void HittableList::clear() {
    hittable_list.clear();
}

void HittableList::add(Hittable* obj) {
    hittable_list.push_back(obj);
}

Scene::Scene() {}
Scene::Scene(Hittable* object): objects(HittableList(object)) {}

void Scene::add_object(Hittable* obj) {
    objects.add(obj);
}

color Scene::ray_color(const ray& r) {
    hit_record rec;
    bool hits = objects.hit(r, 0, 100, rec);
    if (hits) {
        return 255 * (rec.normal + vec3(1, 1, 1)) / 2;
    }
    return color(240, 240, 240);
}
