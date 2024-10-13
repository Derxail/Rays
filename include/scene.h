#pragma once
#include "vec.h"
#include "ray.h"
#include <vector>

struct hit_record {
public:
    vec3 hit_point;
    vec3 normal;
    double hit_t;
    bool front_face(const ray& r) const;
    // void set_face_normal(const ray& r, const vec3& outward_normal);
};

class Hittable {
public:
    virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec);
};

class Sphere: public Hittable {
public:
    Sphere(vec3, double);
    bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) override;
private:
    const vec3 center;
    const double radius;
};

class HittableList: public Hittable {
public:
    HittableList();
    HittableList(Hittable*);
    bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) override;
    void clear();
    void add(Hittable*);
private:
    std::vector<Hittable*> hittable_list;
};

class Scene {
public:
    Scene();
    Scene(Hittable* object);
    void add_object(Hittable*);
    void clear_objects();
    color ray_color(const ray&);
private:
    HittableList objects;
};
