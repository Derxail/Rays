#pragma once
#include "vec.h"
#include "ray.h"

class Viewport {
public:
    int pixel_height, pixel_width;
    double viewport_height, viewport_width;
    Viewport(int pixel_width, double viewport_width, double aspect, vec3 camera_pos, vec3 view_direct, vec3 up_direct=vec3(0, 0, 1));
    color pixel_color(int x, int y) const;
    color scan() const;
    void reset_scan() const;
private:
    mutable int scan_coords[2] = {0, 0};
    mutable ray scanning_ray;
    vec3 viewport_pos_ul, camera_pos;
    vec3 x_step, y_step;
};