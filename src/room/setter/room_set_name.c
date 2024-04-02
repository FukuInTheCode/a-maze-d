/*
** EPITECH PROJECT, 2024
** room_set_name.c
** File description:
** room_set_name.c
*/

#include "my.h"

int room_set_name(room_t *room, char const *name)
{
    free(room->name);
    room->name = my_strdup(name);
    return 0;
}
