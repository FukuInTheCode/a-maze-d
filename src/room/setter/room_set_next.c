/*
** EPITECH PROJECT, 2024
** room_set_next.c
** File description:
** room_set_next.c
*/

#include "my.h"

int room_set_next(room_t *room, room_t *next)
{
    room->next = next;
    return 0;
}
