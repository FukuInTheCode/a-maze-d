/*
** EPITECH PROJECT, 2024
** use_pathfinding.c
** File description:
** use_pathfinding.c
*/

#include "my.h"

static int set_path(robot_t *r, room_t *start)
{
    static size_t _index_ = 0;

    if (!start->connected_rooms[_index_])
        _index_ = 0;
    for (; !start->connected_rooms[_index_]->to;) {
        if (!start->connected_rooms[_index_ + 1])
            _index_ = 0;
        else
         _index_++;
    }
    r->room = start->connected_rooms[_index_];
    _index_++;
    return 0;
}

static bool do_move(robot_t *head, room_t *start)
{
    size_t num = 0;

    for (; head; head = head->next) {
        if (head->room && head->room->type == END)
            continue;
        num++;
        if (!head->room)
            set_path(head, start);
        else
            head->room = head->room->to;
        num != 1 && write(1, " ", 1);
        write(1, "P", 1);
        my_put_nbr(head->id);
        write(1, "-", 1);
        write(1, head->room->name, my_strlen(head->room->name));
    }
    if (num != 0)
        return true;
    return false;
}

int move_robots(robot_t *head_robots, room_t *head_rooms)
{
    room_t *start = find_start(head_rooms);

    if (start_pathfinding(head_rooms) == 84 || !start)
        return 84;
    while (do_move(head_robots, start))
        write(1, "\n", 1);
    return 0;
}
