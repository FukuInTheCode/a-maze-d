/*
** EPITECH PROJECT, 2024
** room_get.c
** File description:
** room_get.c
*/

#include "my.h"

room_t *room_get(room_t *room, char const *name)
{
    for (; room; room = room->next)
        if (!my_strcmp(room->name, name))
            return room;
    return room;
}
