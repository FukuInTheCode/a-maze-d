/*
** EPITECH PROJECT, 2024
** visite_room.c
** File description:
** visite_room.c
*/

#include "my.h"

bool visite_room(room_t *room)
{
    if (!room)
        return false;
    if (room->type == END)
        return true;
    if (!room->connected_rooms)
        return false;
    for (size_t i = 0; room->connected_rooms[i]; i++) {
        if (room->connected_rooms[i]->visited)
            continue;
        if (room->connected_rooms[i]->type != END)
            room_set_visited(room->connected_rooms[i], true);
        if (visite_room(room->connected_rooms[i])) {
            room_set_to(room, room->connected_rooms[i]);
            return true;
        }
    }
    return false;
}
