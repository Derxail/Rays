#include <string>
#include <cmath>
#include "vec.h"

vec3::vec3() {
    this->coord[0] = 0;
    this->coord[1] = 0;
    this->coord[2] = 0;
}
vec3::vec3(double x, double y, double z) {
    this->coord[0] = x;
    this->coord[1] = y;
    this->coord[2] = z;
}
double vec3::x() const {return this->coord[0];}
double vec3::y() const {return this->coord[1];}
double vec3::z() const {return this->coord[2];}
double vec3::get(int idx) const {
    return this->coord[idx];
}
vec3* vec3::add(const vec3& vec) {
    this->coord[0] += vec.coord[0];
    this->coord[1] += vec.coord[1];
    this->coord[2] += vec.coord[2];
    return this;
}
vec3* vec3::sub(const vec3& vec) {
    this->coord[0] -= vec.coord[0];
    this->coord[1] -= vec.coord[1];
    this->coord[2] -= vec.coord[2];
    return this;
}
void vec3::scale(int scalar) {
    this->coord[0] *= scalar;
    this->coord[1] *= scalar;
    this->coord[2] *= scalar;
}
double vec3::dot(const vec3& vec) const {
    return this->coord[0] * vec.coord[0] + this->coord[1] * vec.coord[1] + this->coord[2] * vec.coord[2];
}
vec3 vec3::cross(const vec3& vec) const {
    vec3 mult = vec3(this->coord[2] * vec.coord[1] - this->coord[1] * vec.coord[2],
                     this->coord[0] * vec.coord[2] - this->coord[2] * vec.coord[0],
                     this->coord[1] * vec.coord[0] - this->coord[0] * vec.coord[1]);
    return mult;
}
std::string vec3::print() const {
    std::string text = std::to_string(this->coord[0]) + ' ' +
                       std::to_string(this->coord[1]) + ' ' +
                       std::to_string(this->coord[2]) + '\n';
    return text;
}
double vec3::length() const {
    double sq_len = this->dot(*this);
    return std::sqrt(sq_len);
}
double vec3::length_squared() const {
    double sq_len = this->dot(*this);
    return sq_len;
}

vec3 vec3::operator+(const vec3& vec) const {
    return vec3(this->x() + vec.x(), this->y() + vec.y(), this->z() + vec.z());
}

vec3 vec3::operator-(const vec3& vec) const {
    return vec3(this->x() - vec.x(), this->y() - vec.y(), this->z() - vec.z());
}

vec3 vec3::operator-() const {
    return vec3(-this->x(), -this->y(), -this->z());
}

vec3 operator*(double t, const vec3& vec) {
    return vec3(t * vec.x(), t * vec.y(), t * vec.z());
}

vec3 operator/(const vec3& vec, double t) {
    return vec3(vec.x() / t, vec.y() / t, vec.z() / t);
}

vec3 unit_vector(vec3 vec) {
    return vec / vec.length();
}
