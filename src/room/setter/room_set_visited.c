/*
** EPITECH PROJECT, 2024
** room_set_visited.c
** File description:
** room_set_visited.c
*/

#include "my.h"

int room_set_visited(room_t *room, bool visited)
{
    room->visited = visited;
    return 0;
}
