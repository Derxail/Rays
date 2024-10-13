#include <iostream>
#include <string>
#include <fstream>
#include "vec.h"
#include "ray.h"
#include "scene.h"
#include "viewport.h"

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
    out << pixel_color.print();
}

void write_image(Viewport& viewport, std::string name) {
    std::string path(name);
    std::ofstream os(path);

    os << "P3\n" << viewport.pixel_width << ' ' << viewport.pixel_height << "\n255\n";

    for (int j = 0; j < viewport.pixel_height; j++)
    {
        std::clog << "\rScanlines remaining: " << (viewport.pixel_height - j) << ' ' << std::flush;
        for (int i = 0; i < viewport.pixel_width; i++)
        {
            write_color(os, viewport.scan());
        }
    }
    std::clog << "\rDone.                 \n";
}