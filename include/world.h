#pragma once
#include "vec.h"
#include "ray.h"
#include <vector>

struct hit_record {
public:
    vec3 hit_point;
    vec3 normal;
    double hit_t;
    bool front_face(const ray& r);
    void set_face_normal(const ray& r, const vec3& outward_normal);
};

class Hittable {
public:
    virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) = 0;
};

class HittableList {
public:
    HittableList();
    HittableList(Hittable&);
    bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec);
    void clear();
    void add();
private:
    std::vector<Hittable> hittable_list;
};

class Sphere: public Hittable {
public:
    Sphere(vec3, double);
    bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) override;
private:
    const vec3 center;
    const double radius;
};