/*
** EPITECH PROJECT, 2024
** set_linked_list_robot.c
** File description:
** set_linked_list_robot.c
*/

#include "my.h"

bool is_int(char *line)
{
    for (int i = 0; line[i] != '\0'; i++) {
        if (!(line[i] >= '0' && line[i] <= '9'))
            return false;
    }
    return true;
}

int get_error(char **line)
{
    size_t len_line = my_len_word_array(line);

    if (len_line != 3)
        return 84;
    if(!is_int(line[1]) || !is_int(line[2]))
        return 84;
    return 0;
}

int set_head(room_t **head, char **line)
{
    room_t *tmp = room_create();
    int x = my_getnbr(line[1]);
    int y = my_getnbr(line[2]);

    room_set_name(tmp, line[0]);
    room_set_pos(tmp, x, y);
    if (*head == NULL)
        *head = tmp;
    else
        room_add(*head, tmp);
    return 0;
}

int set_linked_list_room(char **line, room_t **head)
{
    if (get_error(line) == 84)
        return 84;
    set_head(head, line);
    return 0;
}
