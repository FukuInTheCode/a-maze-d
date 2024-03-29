/*
** EPITECH PROJECT, 2024
** display_nbr_robot.c
** File description:
** display_nbr_robot.c
*/

#include "my.h"

int display_nbr_robots(int nbr)
{
    write(1, "#number_of_robots\n", 18);
    my_put_nbr(nbr);
    write(1, "\n", 1);
    return 0;
}
