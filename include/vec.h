#pragma once
#include <string>

struct vec3 {
    public:
        double coord[3];
        vec3();
        vec3(double, double, double);
        double get(int) const;
        double x() const;
        double y() const;
        double z() const;
        vec3* add(const vec3&);
        vec3* sub(const vec3&);
        void scale(int);
        double dot(const vec3&) const;
        vec3 cross(const vec3&) const;
        std::string print() const;
        double length() const;
        double length_squared() const;
        vec3 operator+(const vec3&) const;
        vec3 operator-(const vec3&) const;
        vec3 operator-() const;
};

vec3 operator*(double, const vec3&);
vec3 operator/(const vec3&, double);
vec3 unit_vector(vec3);
