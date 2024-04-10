/*
** EPITECH PROJECT, 2024
** set_connections.c
** File description:
** set_connections.c
*/

#include "my.h"

static bool is_tunnel(char *line, room_t *head)
{
    char **arr = my_str_to_word_array(line, "-");

    if (my_len_word_array(arr) != 2) {
        my_free_word_array(arr);
        return false;
    }
    if (!room_get(head, arr[0])) {
        my_free_word_array(arr);
        return false;
    }
    if (!room_get(head, arr[1])) {
        my_free_word_array(arr);
        return false;
    }
    my_free_word_array(arr);
    return true;
}

int set_connections(char **lines, robot_t *head_robots, room_t *head_rooms)
{
    size_t i = 0;
    char **line = NULL;
    room_t *first = NULL;
    room_t *sec = NULL;

    for (; lines[i] && !is_tunnel(lines[i], head_rooms); i++);
    if (!lines[i])
        return 84;
    write(1, "#tunnels\n", 9);
    for (; lines[i] && is_tunnel(lines[i], head_rooms); i++) {
        write(1, lines[i], my_strlen(lines[i]));
        write(1, "\n", 1);
        line = my_str_to_word_array(lines[i], "-");
        first = room_get(head_rooms, line[0]);
        sec = room_get(head_rooms, line[1]);
        room_set_connected(first, room_array_add(first->connected_rooms, sec));
        room_set_connected(sec, room_array_add(sec->connected_rooms, first));
    }
    return 0;
}
