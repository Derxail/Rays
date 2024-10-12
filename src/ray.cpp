#include "ray.h"
#include <cmath>

ray::ray(vec3 A, vec3 b): source(A), direct(b) {}

ray::ray(): ray(vec3(), vec3()) {}

vec3 ray::at(double t) const {
    return source + t * direct;
}

void ray::redirect(vec3 new_direct) {
    direct = new_direct;
}

vec3& ray::direction() const {
    vec3& dir = direct;
    return dir;
}

vec3 ray::source_point() const {
    return source;
}

color ray_color(const ray& r) {
    vec3 center = vec3(3, 0, 0);
    double radius = 2.0;
    if (hit_sphere(center, radius, r)) {
        vec3 delta = r.source_point() - center;
        vec3 dir = r.direction();
        double dot = delta.dot(dir);
        double hit_t = -(dot + std::sqrt((dot*dot + dir.length_squared() * (radius*radius - delta.length_squared())))) / dir.length_squared();
        vec3 normal = unit_vector(r.at(hit_t) - center);
        normal = 255 * (normal + vec3(1, 1, 1)) / 2;
        return normal;
    }
    return color(240, 240, 240);
}

bool hit_sphere(const vec3& center, double radius, const ray& r) {
    vec3 delta = r.source_point() - center;
    return (delta.length_squared() - delta.dot(r.direction())*delta.dot(r.direction()) / r.direction().length_squared() <= radius*radius);
}
