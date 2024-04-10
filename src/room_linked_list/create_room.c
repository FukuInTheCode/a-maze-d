/*
** EPITECH PROJECT, 2024
** create_room.c
** File description:
** create_room.c
*/

#include "my.h"

int get_if_no_room(char **lines, int i)
{
    for (int j = 0; lines[i][j] != '\0'; j++) {
        if (lines[i][j] == '-' || lines[i][j] == '#') {
            return 1;
        }
    }
    return 0;
}

int create_room(char **lines)
{
    char **room = NULL;
    int nbr_room = 0;
    room_t *head = NULL;

    for (int i = 1; lines[i] != NULL; i++) {
        if (get_if_no_room(lines, i) == 1)
            continue;
        room = my_str_to_word_array(lines[i], " ");
        nbr_room += 1;
        if (set_linked_list_room(room, &head) == 84)
            return 84;
    }
    if (nbr_room <= 1)
        return 84;
    return 0;
}
