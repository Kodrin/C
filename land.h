#ifndef LAND_H_INCLUDED
#define LAND_H_INCLUDED

#include "color.h"
#include "vector.h"

/*
    NOTES:
    THE LAND IS COMPRISED OF A 2D GRID OF NODES, CALLED LAND NODES
    EACH NODE REPRESENTS A PIECE OF LAND WITH A POSITION, ELEVATION
    AND BIOME.
*/

#define WATER 1
#define MOUNTAIN 2
#define RIVER 3
#define FOREST 4
#define HILL 5
#define FIELD 6
#define CAVE 7

//decribing land nodes inside the map

typedef struct landnode_s
{
    int id;             //identifier
    vec2 position;      //position in 2d space
    float elevation;    //how high it goes
    int biome;          //environment its in

} landnode_t;


void landnode_init(landnode_t *landnode);
void landnode_update();
void landnode_generate();
char landnode_interpret_elevation(landnode_t *landnode); //will return char based on elevation
color_t landnode_interpret_biome(landnode_t *landnode); //will return char based on elevation

#endif // LAND_H_INCLUDED
