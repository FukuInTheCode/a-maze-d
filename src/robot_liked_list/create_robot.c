/*
** EPITECH PROJECT, 2024
** create_robot.c
** File description:
** create_robot.c
*/

#include "my.h"

int create_robot(char **lines)
{
    char *nbr_robot = lines[0];
    int nbr = 0;
    robot_t *head = robot_create();

    if (lines[0] == NULL)
        return 84;
    for (int i = 0; nbr_robot[i] != '\0' && nbr_robot[i] != '\n'; i++) {
        if (!(nbr_robot[i] >= '0' && nbr_robot[i] <= '9'))
            return 84;
    }
    nbr = my_getnbr(lines[0]);
    if (nbr == 0)
        return 84;
    set_linked_list_robot(nbr, head);
    return 0;
}
