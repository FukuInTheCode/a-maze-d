/*
** EPITECH PROJECT, 2024
** robot_set_id.c
** File description:
** robot_set_id.c
*/

#include "my.h"
#include <stdio.h>

int robot_set_id(robot_t *robot, int id)
{
    robot->id = id;
    return 0;
}
