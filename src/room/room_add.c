/*
** EPITECH PROJECT, 2024
** room_add.c
** File description:
** room_add.c
*/

#include "my.h"

int room_add(room_t *room, room_t *to_add)
{
    for (; room->next; room = room->next);
    room->next = to_add;
    to_add->next = NULL;
    return 0;
}
