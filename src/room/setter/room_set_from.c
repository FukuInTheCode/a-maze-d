/*
** EPITECH PROJECT, 2024
** room_set_from.c
** File description:
** room_set_from.c
*/

#include "my.h"

int room_set_from(room_t *room, room_t *from)
{
    room->from = from;
    return 0;
}
