/*
** EPITECH PROJECT, 2024
** get_if_same.c
** File description:
** get_if_same.c
*/

#include "my.h"

int get_if_same_name_loop(room_t *tmp, room_t *current)
{
    while (tmp != NULL) {
        if (my_strcmp(current->name, tmp->name) == 0) {
            return 84;
        }
        tmp = tmp->next;
    }
    return 0;
}

int get_if_same_name(room_t *head)
{
    room_t *current = head;
    room_t *tmp = NULL;

    while (current != NULL) {
        tmp = current->next;
        if (get_if_same_name_loop(tmp, current) == 84)
            return 84;
        current = current->next;
    }
    return 0;
}
