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

    for (int i = 0; nbr_robot[i] != '\0' && nbr_robot[i] != '\n'; i++) {
        if (!(nbr_robot[i] >= '0' && nbr_robot[i] <= '9'))
            return 84;
    }
    nbr = my_getnbr(lines[0]);
    write(1, "#number_of_robots\n", 18);
    my_put_nbr(nbr);
    write(1, "\n", 1);
    return 0;
}
