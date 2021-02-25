#ifndef GENERIC_FUNCTIONS_H
#define GENERIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdbool.h>

float *create_uniform_array(size_t size);
void print_array(float *arr, size_t size);
bool is_in_string(char* str, char* substring);
bool is_in_string_case(char* str, char* substring);

#endif