/*
** EPITECH PROJECT, 2024
** room_array_destroy.c
** File description:
** room_array_destroy.c
*/

#include "my.h"

int room_array_destroy(room_t **arr)
{
    free(arr);
    return 0;
}
