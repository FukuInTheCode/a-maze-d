/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv, char **envp)
{
    if (argc != 1)
        return 84;
    return get_user_input();
}
