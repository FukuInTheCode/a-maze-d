/*
** EPITECH PROJECT, 2024
** room_create.c
** File description:
** room_create.c
*/

#include "my.h"

room_t *room_create(void)
{
    room_t *room = malloc(sizeof(room_t));

    my_memset((void *)room, 0, sizeof(room_t));
    room->type = ROOM;
    room->connected_rooms = room_array_create();
    return room;
}
