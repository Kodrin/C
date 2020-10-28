#include "color.h"

void set_color(color_t *color, float r, float g, float b, float a)
{
    (*color).r = r;
    (*color).g = g;
    (*color).b = b;
    (*color).a = a;
}
