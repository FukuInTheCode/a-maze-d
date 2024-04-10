/*
** EPITECH PROJECT, 2024
** set_end.c
** File description:
** set_end.c
*/

#include "my.h"

int get_if_end(room_t *head, char **line, int i, int *nbr_end)
{
    int value = 0;

    if (my_strcmp("##end", line[i]) == 0) {
        *nbr_end += 1;
        value = set_end(line[i + 1], head);
    }
    return value;
}

int set_end(char *line, room_t *head)
{
    char **info_end = my_str_to_word_array(line, " ");
    room_t *room_end = NULL;

    if (info_end == NULL)
        return 84;
    room_end = room_get(head, info_end[0]);
    room_end->type = END;
    return 0;
}
