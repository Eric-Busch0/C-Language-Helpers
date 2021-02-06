#include "statistics.h"
#include <math.h>
#include <stdint.h>

float sum(float *arr, size_t arr_size)
{
    float sm = 0;
    for (size_t i = 0; i < arr_size; i++)
    {
        sm += arr[i];
    }
    return sm;
}

float average(float *arr, size_t arr_size)
{
    return sum(arr, arr_size) / arr_size;
}

float min(float *arr, size_t arr_size)
{
    float mn = arr[0];

    for (size_t i = 0; i < arr_size; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    return mn;
}

float max(float *arr, size_t arr_size)
{
    float mx = arr[0];

    for (size_t i = 0; i < arr_size; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    return mx;
}