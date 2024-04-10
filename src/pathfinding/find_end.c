/*
** EPITECH PROJECT, 2024
** find_start.c
** File description:
** find_start.c
*/

#include "my.h"

room_t *find_end(room_t *head)
{
    for (; head; head = head->next)
        if (head->type == END)
            return head;
    return NULL;
}
