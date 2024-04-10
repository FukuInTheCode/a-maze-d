/*
** EPITECH PROJECT, 2024
** set_start.c
** File description:
** set_start.c
*/

#include "my.h"

int set_start(char *line, room_t *head)
{
    char **info_start = my_str_to_word_array(line, " ");
    room_t *room_start = NULL;

    if (info_start == NULL)
        return 84;
    room_start = room_get(head, info_start[0]);
    room_start->type = START;
    return 0;
}

int get_if_start(room_t *head, char **line, int i, int *nbr_start)
{
    int value = 0;

    if (my_strcmp("##start", line[i]) == 0) {
        *nbr_start += 1;
        value = set_start(line[i + 1], head);
    }
    return value;
}

int set_start_and_end(char **line, room_t *head)
{
    int nbr_start = 0;
    int nbr_end = 0;
    int value_return = 0;

    for (int i = 0; line[i] != NULL; i++) {
        if (line[i][0] == '#') {
            value_return |= get_if_start(head, line, i, &nbr_start);
            value_return |= get_if_end(head, line, i, &nbr_end);
        }
    }
    if (nbr_start != 1 || nbr_end != 1)
        return 84;
    return value_return;
}
