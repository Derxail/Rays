#pragma once
#include "vec.h"

using color = vec3;

struct ray {
public:
    ray();
    ray(vec3, vec3);
    vec3 at(double) const;
    void redirect(vec3);
    vec3& direction() const;
    vec3 source_point() const;
private:
    mutable vec3 source, direct;
    color ray_color = color();
};

color ray_color(const ray&);
bool hit_sphere(const vec3& center, double radius, const ray& r);
