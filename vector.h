#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

//3D data structs

//vector 2
typedef struct vector2
{
    double x, y;
} vec2;

//vector3
typedef struct vector3
{
    double x, y, z;
} vec3;

//vector 4
typedef struct vector4
{
    double x, y, z, w;
} vec4;


//error membor x is not a struct or union
//fix: ...?
vec2 InitVec2();
vec3 InitVec3();
vec4 InitVec4();
void SetPosition(vec2 *vector, vec2 position);
void print_vec2(vec2 vector);
void PrintVec3(vec3 vector);



#endif // VECTOR_H_INCLUDED
