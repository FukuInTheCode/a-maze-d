/*
** EPITECH PROJECT, 2024
** create_robot.c
** File description:
** create_robot.c
*/

#include "my.h"

int create_robot(char **lines, robot_t **head)
{
    char *nbr_robot = lines[0];
    int nbr = 0;

    if (lines[0] == NULL)
        return 84;
    for (int i = 0; nbr_robot[i] != '\0' && nbr_robot[i] != '\n'; i++) {
        if (!(nbr_robot[i] >= '0' && nbr_robot[i] <= '9'))
            return 84;
    }
    *head = robot_create();
    nbr = my_getnbr(lines[0]);
    if (nbr == 0)
        return 84;
    set_linked_list_robot(nbr, *head);
    write(1, "#number_of_robots\n", 19);
    my_put_nbr(nbr);
    write(1, "\n", 1);
    return 0;
}
