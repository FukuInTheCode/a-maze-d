/*
** EPITECH PROJECT, 2024
** start_pathfinding.c
** File description:
** start_pathfinding.c
*/

#include "my.h"

int start_pathfinding(room_t *head)
{
    room_t *start = find_start(head);
    int ways = 0;

    if (!start || !start->connected_rooms || !*start->connected_rooms)
        return 84;
    for (size_t i = 0; start->connected_rooms[i]; i++)
        ways += visite_room(start->connected_rooms[i]);
    if (!ways)
        return 84;
    return 0;
}
