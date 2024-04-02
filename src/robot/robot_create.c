/*
** EPITECH PROJECT, 2024
** robot_create.c
** File description:
** robot_create.c
*/

#include "my.h"

robot_t *robot_create(void)
{
    robot_t *robot = malloc(sizeof(robot_t));

    my_memset((void *)robot, 0, sizeof(robot_t));
    return robot;
}
