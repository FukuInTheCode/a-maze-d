/*
** EPITECH PROJECT, 2024
** add_to_list.c
** File description:
** add_to_list.c
*/

#include "my.h"

static size_t get_len_list(char **list)
{
    size_t len = 0;

    for (len; list[len] != NULL; len++);
    return len;
}

char **add_to_list(char *input, char **list)
{
    size_t len_list = get_len_list(list);
    char **new_list = malloc(sizeof(len_list + 1));



    free(list);
    return new_list;
}
