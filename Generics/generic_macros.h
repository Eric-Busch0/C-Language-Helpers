#ifndef GENERIC_MACROS_H
#define GENERIC_MACROS_H
#include <stdlib.h>
#include <stdio.h>

#define nullstr(str, size) memset(str, '\0', size)
#define zeroArr(arr, size) memset(arr, 0, size)
#define put_endl printf("\n")
#endif