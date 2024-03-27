/*
** EPITECH PROJECT, 2024
** user_input.c
** File description:
** user_input.c
*/

#include "my.h"

int get_size_input(char *input)
{
    int len = 0;

    for (len; input[len] != '\0'; len++);
    return len;
}

int get_user_input(void)
{
    char *input = NULL;
    size_t size = 0;

    while(true) {
        if (getline(&input, &size, stdin) == -1)
            break;
        remove_comment(input);
        if (get_size_input(input) != 0)
            add_to_list();
    }
    return 0;
}