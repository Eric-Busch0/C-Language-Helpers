#include "generic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

float *create_uniform_array(size_t size)
{
    /* Creates and fills an array allocated on the heap */

    float *arr = malloc(sizeof(float) * size);

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    return arr;
}

void fill_array_uniform(float *arr, size_t size)
{
    /* Fills given array from 0 to size - 1 */

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}

void print_array(float *arr, size_t size)
{
    /*Prints the values of an array */
    
    printf("\n\n");

    for (size_t i = 0; i < size; i++)
    {
        printf("%f\n", arr[i]);
    }

    printf("\n\n");
}

bool is_in_string(char *str, char *substring)
{
    /* Determines whether the substring is inside the string (case insensistive) */

    if (strcasestr(str, substring) != NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_in_string_case(char *str, char *substring)
{
    /* Determines whether the substring is inside the string (case sensistive) */

    if (strstr(str, substring) != NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
