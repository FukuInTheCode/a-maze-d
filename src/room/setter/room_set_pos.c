/*
** EPITECH PROJECT, 2024
** room_set_pos.c
** File description:
** room_set_pos.c
*/

#include "my.h"

int room_set_pos(room_t *room, int x, int y)
{
    room->x = x;
    room->y = y;
    return 0;
}
