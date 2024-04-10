/*
** EPITECH PROJECT, 2024
** user_input.c
** File description:
** user_input.c
*/

#include "my.h"

static int get_size_input(char const *input)
{
    int len = 0;

    for (len; input[len] != '\0'; len++);
    return len;
}

static int start_algo(char **list)
{
    robot_t *robots = NULL;
    room_t *rooms = NULL;

    if (create_robot(list, &robots) == 84 || create_room(list, &rooms) == 84)
        return 84;
    if (set_connections(list, robots, rooms) == 84)
        return 84;
    if (set_start_and_end(list, rooms) == 84)
        return 84;
    if (move_robots(robots, rooms) == 84)
       return 84;
    return 0;
}

int get_user_input(void)
{
    char *input = NULL;
    char **list = malloc(sizeof(char *));
    size_t size = 0;

    if (list == NULL)
        return 84;
    list[0] = NULL;
    while (true) {
        if (getline(&input, &size, stdin) == -1)
            break;
        remove_comment(input);
        if (get_size_input(input) != 0)
            list = add_to_list(input, list);
    }
    return start_algo(list);
}
