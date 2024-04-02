/*
** EPITECH PROJECT, 2024
** remove_comment.c
** File description:
** remove_comment.c
*/

#include "my.h"

int remove_comment(char *input)
{
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '#' && input[i + 1] != '#')
            input[i] = '\0';
    }
    return 0;
}
