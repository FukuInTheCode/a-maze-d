/*
** EPITECH PROJECT, 2024
** room_is_empty.c
** File description:
** room_is_empty.c
*/

#include "my.h"

bool room_is_empty(room_t *room)
{
    return !room->has_resident;
}
