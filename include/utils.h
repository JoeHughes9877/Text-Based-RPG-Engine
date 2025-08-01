#ifndef UTILS_H
#define UTILS_H

#include "../include/database.h"

// Generates a random number between min_value and max_value (inclusive)
int generate_random_number(int min_value, int max_value);

// Prompts user for input (if data is non-NULL, it is printed first),
// then reads a string from stdin (dynamically allocated)
char *get_string(char *data);

// Converts a string to lowercase (modifies in place)
char *lower_player_input(char *input);

int generate_random_number_bias(int min_value, int max_value, double bias);

Enemy *locate_enemy(char *player_input);

#endif // UTILS_H
