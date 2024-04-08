/*
** EPITECH PROJECT, 2024
** robot_add.c
** File description:
** robot_add.c
*/

#include "my.h"

int robot_add(robot_t *robot, robot_t *new)
{
    for (; robot->next; robot = robot->next);
    robot_set_id(new, robot->id + 1);
    robot_set_next(robot, new);
    return 0;
}
