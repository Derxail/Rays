#include "world.h"
#include "vec.h"
#include "ray.h"
#include "cmath"

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