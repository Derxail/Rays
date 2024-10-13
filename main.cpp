#include "utils.h"
#include "ray.h"
#include "scene.h"
#include "viewport.h"
#include <iostream>

int main()
{
    Scene scene;
    Viewport vp1 = Viewport(scene, 500, 4.0, 2.0/1.0, vec3(0, 0, 0), vec3(1, 0, 0));
    Viewport vp2 = Viewport(scene, 500, 4.0, 2.0/1.0, vec3(6, 0, 0), vec3(-1, 0, 0));
    Viewport vp3 = Viewport(scene, 500, 4.0, 2.0/1.0, vec3(3, 5, 0), vec3(0, -1, 0));

    Sphere sp1 = Sphere(vec3(3, 0, 0), 2.0);
    Sphere sp2 = Sphere(vec3(3, -100, 0), 95);
    scene.add_object(&sp1);
    scene.add_object(&sp2);
    
    write_image(vp1, "../images/sphere1.ppm");
    write_image(vp2, "../images/sphere2.ppm");
    write_image(vp3, "../images/sphere3.ppm");
}
