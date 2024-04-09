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
    struct room_s *from;
    struct room_s *to;
} room_t;

room_t *room_create(void);
int room_destroy(room_t *);
int room_set_name(room_t *, char const *);
int room_set_pos(room_t *, int, int);
int room_set_resident(room_t *, bool);
int room_set_visited(room_t *, bool);
int room_set_next(room_t *, room_t *);
int room_set_from(room_t *, room_t *);
int room_set_to(room_t *, room_t *);
int room_set_connected(room_t *, room_t **);
int room_add_connection(room_t *, room_t *);
int room_add(room_t *, room_t *);
bool room_is_empty(room_t *);
room_t *room_get(room_t *, char const *);

room_t **room_array_create(void);
int room_array_destroy(room_t **);
room_t **room_array_add(room_t **, room_t *);

int my_strcmp(char const *, char const *);

typedef struct robot_s {
    int id;
    bool status;
    struct robot_s *next;
} robot_t;

robot_t *robot_create(void);
int robot_destroy(robot_t *);
int robot_add(robot_t *, robot_t *);
int robot_set_id(robot_t *, int);
int robot_set_status(robot_t *, bool);
int robot_set_next(robot_t *, robot_t *);

void *my_memset(char *, char, size_t);
char *my_strtok(char *, char const *);
char **my_str_to_word_array(char *, char const *);
int my_free_word_array(char **);
size_t my_len_word_array(char **);
char *my_strdup(char const *);
size_t my_strlen(char const *);
int my_getnbr(char const *);
void my_put_nbr(int);
void my_putchar(char);

int get_user_input(void);
int remove_comment(char *);
char **add_to_list(char *, char **);

room_t *find_start(room_t *);
bool visite_room(room_t *);
int start_pathfinding(room_t *);

int create_robot(char **);
int set_linked_list_robot(int, robot_t *);

int create_room(char **);
int set_linked_list_room(char **, room_t **);
