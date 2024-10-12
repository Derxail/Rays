#include "vec.h"
#ifndef WIDTH
#define WIDTH 480
#endif

#ifndef HEIGHT
#define HEIGHT 320
#endif

using color = vec3;

color gradient_vertical(const color& color_start, color& const color_end);
color gradient_horizontal(const color& const color_start, color& const color_end);
color invert_color(const color& source) {
    return color(255 - source.x(), 255 - source.y(), 255 - source.z());
}
color color2bw(const color& source) {
    double gray = (source.x() + source.y() + source.z()) / 3;
    return color(gray, gray, gray);
}
