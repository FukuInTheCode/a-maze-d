/*
** EPITECH PROJECT, 2024
** room_destroy.c
** File description:
** room_destroy.c
*/

#include "my.h"

int room_destroy(room_t *room)
{
    if (!room)
        return 0;
    for (room_t *tmp = room->next; room;) {
        room_array_destroy(room->connected_rooms);
        free(room->name);
        free(room);
        room = tmp;
        if (room)
            tmp = room->next;
    }
    return 0;
}
