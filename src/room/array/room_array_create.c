/*
** EPITECH PROJECT, 2024
** room_array_create.c
** File description:
** room_array_create.c
*/

#include "my.h"

room_t **room_array_create(void)
{
    room_t **arr = malloc(sizeof(room_t *));

    if (!arr)
        return NULL;
    *arr = NULL;
    return arr;
}
