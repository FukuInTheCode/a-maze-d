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
    int i = 0;
    char **new_list = malloc(sizeof(char *) * (len_list + 2));

    if (!new_list)
        return NULL;
    for (i = 0; list[i] != NULL; i++) {
        new_list[i] = list[i];
    }
    new_list[i] = my_strdup(input);
    new_list[i + 1] = NULL;
    free(list);
    return new_list;
}
