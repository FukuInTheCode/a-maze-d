/*
** EPITECH PROJECT, 2024
** room_set_to.c
** File description:
** room_set_to.c
*/

#include "my.h"

int room_set_to(room_t *room, room_t *to)
{
    room->to = to;
    return 0;
}
