#pragma once
#include "vec.h"

using color = vec3;

color gradient_vertical(const color&, color& const);
color gradient_horizontal(const color& const, color& const);
color invert_color(const color&);
color color2bw(const color&);
