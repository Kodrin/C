#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct color_s
{
    float r,g,b,a;
} color_t;

void set_color(color_t *color, float r, float g, float b, float a);

#endif // COLOR_H_INCLUDED
