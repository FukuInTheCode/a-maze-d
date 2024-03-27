/*
** EPITECH PROJECT, 2024
** robot_set_next.c
** File description:
** robot_set_next.c
*/

#include "my.h"

int robot_set_next(robot_t *robot, robot_t *next)
{
    if (!next)
        return 0;
    robot_set_id(next, robot->id);
    robot->next = next;
    return 0;
}
