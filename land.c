#include "land.h"

//default values for land node
void landnode_init(landnode_t *landnode)
{
    vec2 position;
    position = (vec2) {.x = 0.0, .y = 0.0};
    (*landnode).id = 0;
    (*landnode).position = position;
    (*landnode).elevation = 0.0;
    (*landnode).biome = 0;

//    return *landone = (landnode_t) {};
}

void landnode_update(){}
void landnode_generate(){}

//will return corresponding character based on elevation
char landnode_interpret_elevation(landnode_t *landnode)
{
    float elevation = (*landnode).elevation;

    if(elevation > 0.75)
    {
        return '^';
    }
    else if(elevation > 0.5)
    {
        return '#';
    }
    else if(elevation > 0.25)
    {
        return '*';
    }
    else
    {
        return '.';
    }
}

color_t landnode_interpret_biome(landnode_t *landnode)
{
    color_t color;
    switch((*landnode).biome)
    {
        case 0:
            set_color(&color, 1.0, 0, 0, 1.0);
            break;
        case 1:
            set_color(&color, 0.0, 1.0, 0, 1.0);
            break;
        case 2:
            set_color(&color, 0.0, 0.0, 1.0, 1.0);
            break;

        default:
            break;
    }

    return color;
}
