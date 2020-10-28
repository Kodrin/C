#ifndef GRID_H_INCLUDED
#define GRID_H_INCLUDED

#include "vector.h"

//Cell in a 2 dimensional grid
typedef struct cell2d
{
    int id;
    vec2 position;

} cell2d;

//Cell in a 3 dimensional grid
typedef struct cell3d
{
    int id;
    vec3 position;
} cell3d;

//Grid in 2 dimensional space
typedef struct grid2d
{
    int id;
    vec2 position;
    cell2d cells[50];
} grid2d;

//Grid in 3 dimensional space
typedef struct grid3d
{
    int id;
    vec3 position;
    cell3d cells[50];
} grid3d;

#endif // GRID_H_INCLUDED
