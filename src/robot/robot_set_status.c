/*
** EPITECH PROJECT, 2024
** robot_set_status.c
** File description:
** robot_set_status.c
*/

#include "my.h"

int robot_set_status(robot_t *robot, bool status)
{
    robot->status = status;
    return 0;
}
