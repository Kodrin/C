#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include "vector.h"

//type def is used to redefine data categories
typedef struct line
{
    int id;
    char sentence[50];

} line; //defined as line

typedef enum sample_enum
{
    STATE_ONE,
    STATE_TWO,
    STATE_THREE

};

typedef struct line2d
{
    vec2 positionOne;
    vec3 positionTwo;
} line2d;

typedef struct line3d
{
    vec3 positionOne;
    vec3 positionTwo;
} line3d;

#endif // LINE_H_INCLUDED
