/*
** EPITECH PROJECT, 2024
** create_room.c
** File description:
** create_room.c
*/

#include "my.h"

int get_if_no_room(char **lines, int i)
{
    if (!my_strcmp(lines[i], "##start"))
        write(1, "##start\n", 8);
    if (!my_strcmp(lines[i], "##end"))
        write(1, "##end\n", 6);
    for (int j = 0; lines[i][j] != '\0'; j++) {
        if (lines[i][j] == '-' || lines[i][j] == '#') {
            return 1;
        }
    }
    return 0;
}

int create_room(char **lines, room_t **head)
{
    char **room = NULL;
    int nbr_room = 0;

    write(1, "#rooms\n", 7);
    for (int i = 1; lines[i] != NULL; i++) {
        if (get_if_no_room(lines, i) == 1)
            continue;
        room = my_str_to_word_array(lines[i], " ");
        nbr_room += 1;
        if (set_linked_list_room(room, head) == 84)
            return 84;
        write(1, lines[i], my_strlen(lines[i]));
        write(1, "\n", 1);
    }
    if (nbr_room <= 1)
        return 84;
    return 0;
}
