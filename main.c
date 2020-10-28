//include libraries
#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "color.h"
#include "vector.h"
#include "line.h"
#include "grid.h"

#include "land.h"
#include "world.h"
#include "control.h"


/*
NOTES:
    //use strcpy to copy string into char[]

*/

/*
NOTES;
- A program about generating top down topographical maps on the terminal emulator

STRUCTURE
    MAIN PROGRAM
        MAIN LOOP
    CONTROLS
        SUB WINDOW
        INTERACTIONS
    GENERATOR
        PROCEDURAL LANDSCAPES
    RENDERER
        DRAW CALLS
        ASCII INTERPRETER

    EXTRAS
        CELLULAR AUTOMATA (WEATHER)
        HISTORICAL LANDMARKS
*/

//main program loop
int main()
{

    world_t world;

    int i;
    for(i = 0; i < LAND_NODES; i++)
    {
        printf("Land Node #%d generated\n", i);
    }

    /*
    int age = 23;
    int newAge = 59;
    int newInt = 10;

    int *pNewInt =  &newInt;
    */

    //printf("Old age is : %d\n, New age is : %d\n", age, newAge); //use %p to print pointers correctly
    //printf("POINTER IS : %p\n",&age); //use %p to print pointers correctly
    //swap(&age, &newAge); //you can pass mem address directly, no need for pointer declaration
    //printf("Old age is : %d\n, New age is : %d\n", age, newAge); //use %p to print pointers correctly

    return 0;
}

