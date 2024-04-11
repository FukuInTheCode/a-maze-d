/*
** EPITECH PROJECT, 2024
** optimization.c
** File description:
** optimization.c
*/

#include "my.h"
#include <limits.h>

static int swap(room_t **rooms, int j)
{
    room_t *tmp = NULL;

    if (!rooms[j] || !rooms[j + 1])
        return 0;
    if (rooms[j]->dist > rooms[j + 1]->dist) {
        tmp = rooms[j];
        rooms[j] = rooms[j + 1];
        rooms[j + 1] = tmp;
    }
    return 0;
}

static int sort(room_t **rooms)
{
    for (size_t i = 0; rooms[i]; i++) {
        for (size_t j = i + 1; rooms[j]; j++) {
            swap(rooms, j);
        }
    }
    return 0;
}

static int set_dist(room_t *room, size_t dist)
{
    if (room->dist != ULONG_MAX)
        return 0;
    room->dist = dist;
    if (!room->connected_rooms)
        return 0;
    for (size_t i = 0; room->connected_rooms[i]; i++)
        set_dist(room->connected_rooms[i], dist + 1);
    return 0;
}

int do_opti(room_t *rooms)
{
    for (room_t *tmp = rooms; tmp; tmp = tmp->next)
        tmp->dist = ULONG_MAX;
    set_dist(find_end(rooms), 0);
    for (room_t *tmp = rooms; tmp; tmp = tmp->next) {
        if (!tmp->connected_rooms)
            continue;
        sort(tmp->connected_rooms);
    }
    return 0;
}
