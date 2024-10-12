#include "utils.h"
#include "ray.h"
#include <iostream>

int main()
{
    Viewport vp1 = Viewport(500, 4.0, 2.0/1.0, vec3(0, 0, 0), vec3(1, 0, 0));
    Viewport vp2 = Viewport(500, 4.0, 2.0/1.0, vec3(6, 0, 0), vec3(-1, 0, 0));
    Viewport vp3 = Viewport(500, 4.0, 2.0/1.0, vec3(3, 5, 0), vec3(0, -1, 0));
    write_image(vp1, "../images/sphere1.ppm");
    write_image(vp2, "../images/sphere2.ppm");
    write_image(vp3, "../images/sphere3.ppm");
}
