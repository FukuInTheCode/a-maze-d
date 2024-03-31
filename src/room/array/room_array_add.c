/*
** EPITECH PROJECT, 2024
** room_array_add.c
** File description:
** room_array_add.c
*/

#include "my.h"

static size_t find_len(room_t **arr)
{
    size_t len = 0;

    for (; arr[len]; len++);
    return len;
}

room_t **room_array_add(room_t **arr, room_t *room)
{
    room_t **new = malloc(sizeof(room_t *) * (find_len(arr) + 1));
    size_t i = 0;

    if (!new)
        return NULL;
    for (; arr[i]; i++)
        new[i] = arr[i];
    new[i] = room;
    new[i + 1] = NULL;
    return new;
}
