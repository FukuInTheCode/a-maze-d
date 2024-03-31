/*
** EPITECH PROJECT, 2024
** room_set_resident.c
** File description:
** room_set_resident.c
*/

#include "my.h"

int room_set_resident(room_t *room, bool resident)
{
    room->has_resident = resident;
    return 0;
}
