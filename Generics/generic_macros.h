#ifndef GENERIC_MACROS_H
#define GENERIC_MACROS_H
#include <stdlib.h>
#include <stdio.h>

#define nullStr(str, size) memset(str, '\0', size)
#define zeroArr(arr, size) memset(arr, 0, size)
#define asPercentage(num, den) (int)round((100 * (((double)num) / den)))
#define arrLen(arr)  (sizeof(arr)/(sizeof(arr[0])))
#define put_endl printf("\n")
#endif