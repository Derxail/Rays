#include "vec.h"
#include "ray.h"
#include "viewport.h"

Viewport::Viewport(int pixel_width, double viewport_width, double aspect, 
                   vec3 camera_pos, vec3 view_direct, vec3 up_direct) {
    this->pixel_width = pixel_width;
    this->pixel_height = int(pixel_width / aspect);
    this->pixel_height = (pixel_height < 1) ? 1 : pixel_height;
    this->viewport_width = viewport_width;
    this->viewport_height = viewport_width * ((double)pixel_height / pixel_width);
    vec3 left_direct = -up_direct.cross(view_direct);
    view_direct = view_direct / view_direct.length();
    up_direct = up_direct / up_direct.length();
    left_direct = left_direct / left_direct.length();
    this->viewport_pos_ul = camera_pos + view_direct + (viewport_height / 2) * up_direct + (viewport_width / 2) * left_direct;
    this->scanning_ray = ray(camera_pos, viewport_pos_ul - camera_pos);
    this->camera_pos = camera_pos;
    this->x_step = -(viewport_width / pixel_width) * left_direct;
    this->y_step = -(viewport_height / pixel_height) * up_direct;
}

color Viewport::pixel_color(int x, int y) const {
    scanning_ray.redirect((viewport_pos_ul + x * x_step + y * y_step) - camera_pos);
    return ray_color(scanning_ray);
}

color Viewport::scan() const {
    color scan_color = ray_color(scanning_ray);
    vec3& dir = scanning_ray.direction();
    dir.add(x_step);
    scan_coords[0] += 1;
    if (scan_coords[0] == pixel_width) {
        scan_coords[0] = 0;
        scan_coords[1] += 1;
        dir.add(y_step);
        dir.sub(pixel_width * x_step);
    }
    if (scan_coords[1] == pixel_height) {
        reset_scan();
    }
    return scan_color;
}

void Viewport::reset_scan() const {
    scan_coords[0] = 0;
    scan_coords[1] = 0;
    scanning_ray.direction() = viewport_pos_ul - camera_pos;
}
