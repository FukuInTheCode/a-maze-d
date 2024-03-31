/*
** EPITECH PROJECT, 2024
** my .h
** File description:
** header for amazed
*/

#pragma once
    #define MYSH_H
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>

typedef enum room_type_e {
    START,
    ROOM,
    END
} room_type_t;

typedef struct room_s {
    char *name;
    int x;
    int y;
    bool has_resident;
    bool visited;
    room_type_t type;
    struct room_s **connected_rooms;
    struct room_s *next;
} room_t;

room_t *room_create(void);
int room_destroy(room_t *);
int room_set_name(room_t *, char const *);
int room_set_pos(room_t *, int, int);
int room_set_resident(room_t *, bool);
int room_set_visited(room_t *, bool);
int room_set_next(room_t *, room_t *);
int room_set_connected(room_t *, room_t **);
int room_add_connection(room_t *, room_t *);
int room_add(room_t *, room_t *);
bool room_is_empty(room_t *);
room_t *room_get(room_t *, char const *);

room_t **room_array_create(void);
int room_array_destroy(room_t **);
room_t **room_array_add(room_t **, room_t *);

int my_strcmp(char const *, char const *);
