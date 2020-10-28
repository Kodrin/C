
#include "vector.h"

//Note: maybe initialize through pointers is better?
vec2 InitVec2()
{
    vec2 init;
    return init = (vec2) {.x = 0.0, .y = 0.0};
}

vec3 InitVec3()
{
    vec3 init;
    return init = (vec3) {.x = 0.0, .y = 0.0, .z =0.0};
}

vec4 InitVec4()
{
    vec4 init;
    return init = (vec4) {.x = 0.0, .y = 0.0, .z = 0.0, .w = 0.0};
}

void SetPosition(vec2 *vector, vec2 position)
{
    (*vector).x = position.x;
    (*vector).y = position.y;
}

void print_vec2(vec2 vector)
{
    printf("vector2// x: %f, y: %f \n", vector.x, vector.y);
}

void PrintVec3(vec3 vector)
{
    printf("Vector3// x: %f, y: %f, z: %f \n", vector.x, vector.y, vector.z);
}
