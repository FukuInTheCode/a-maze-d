/*
** EPITECH PROJECT, 2024
** room_add_connection.c
** File description:
** room_add_connection.c
*/

#include "my.h"

int room_add_connection(room_t *room, room_t *connected)
{
    room_set_connected(room, room_array_add(room->connected_rooms, connected));
    return 0;
}
