/*
** EPITECH PROJECT, 2024
** room_set_connected.c
** File description:
** room_set_connected.c
*/

#include "my.h"

int room_set_connected(room_t *room, room_t **connected)
{
    room_array_destroy(room->connected_rooms);
    room->connected_rooms = connected;
    return 0;
}
