#pragma once
#include <string>
#include "vec.h"
#include "ray.h"
#include "viewport.h"

using color = vec3;

void write_image(Viewport&, std::string);
void write_color(std::ostream&, const color&);
