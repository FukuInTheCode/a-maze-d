/*
** EPITECH PROJECT, 2024
** my .h
** File description:
** header for amazed
*/

#pragma once
    #define MY_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <stddef.h>

typedef struct robot_s {
    int id;
    bool status;
    struct robot_s *next;
} robot_t;

robot_t *robot_create(void);
int robot_destroy(robot_t *);
int robot_set_id(robot_t *, int);
int robot_set_status(robot_t *, bool);
int robot_set_next(robot_t *, robot_t *);

void *my_memset(char *, char, size_t);
char *my_strtok(char *, char const *);



