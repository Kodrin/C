#ifndef CONTROL_H_INCLUDED
#define CONTROL_H_INCLUDED

#include "vector.h"
#include "land.h"

typedef struct nodecursor_s
{
    vec2 position;
    landnode_t currentnode;
} nodecursor_t;


void cursor_move_left(nodecursor_t *cursor);
void cursor_move_right(nodecursor_t *cursor);
void cursor_move_up(nodecursor_t *cursor);
void cursor_move_down(nodecursor_t *cursor);

void cursor_interact(nodecursor_t *cursor);


void application_exit();

#endif // CONTROL_H_INCLUDED
