#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

/*
    NOTES;
    THE WORLD SCRIPT WILL BE IN CHARGE OF GENERATING THE WORLD
    IT WILL CARRY ALL THE FUNCTIONALIY FOR THE TOPOGRAPHICAL MAP

*/

#include "land.h"

#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10
#define LAND_NODES WORLD_WIDTH * WORLD_HEIGHT

#define WORLD_TYPE 0

typedef struct world_s
{
    landnode_t landnodes[LAND_NODES];
} world_t;


void world_generate();
void world_update();
void world_clear();

#endif // WORLD_H_INCLUDED
