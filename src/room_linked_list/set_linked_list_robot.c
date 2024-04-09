/*
** EPITECH PROJECT, 2024
** set_linked_list_robot.c
** File description:
** set_linked_list_robot.c
*/

#include "my.h"

int get_error(char **line)
{
    size_t len_line = my_len_word_array(line);

    if (len_line != 3)
        return 84;
    return 0;
}

int set_head(room_t **head)
{
    if (*head == NULL)
        *head = room_create();
    else
        room_add(*head, room_create());

    return 0;
}

int set_linked_list_room(char **line, room_t **head)
{
    if (get_error(line) == 84)
        return 84;
    set_head(head);
    return 0;
}
