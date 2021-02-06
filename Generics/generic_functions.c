#include "generic_functions.h"
#include <stdio.h>

float *create_uniform_array(size_t size)
{
    float *arr = malloc(sizeof(float) * size);

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    return arr;
}
void print_array(float *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%f\n", arr[i]);
    }
    printf("\n\n");
}