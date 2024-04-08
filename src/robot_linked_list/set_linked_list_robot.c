/*
** EPITECH PROJECT, 2024
** set_linked_list_robot.c
** File description:
** set_linked_list_robot.c
*/

#include "my.h"

int set_linked_list_robot(int n, robot_t *head)
{
    robot_t *current = head;
    robot_t *new = NULL;

    for (int i = 1; i < n; i++) {
        new = robot_create();
        robot_add(current, new);
        current = new;
    }
    return 0;
}
