/*
** EPITECH PROJECT, 2024
** robot_destroy.c
** File description:
** robot_destroy.c
*/

#include "my.h"

int robot_destroy(robot_t *robot)
{
    for (robot_t *tmp = robot->next; robot;) {
        free(robot);
        robot = tmp;
        if (robot)
            tmp = robot->next;
    }
    return 0;
}
