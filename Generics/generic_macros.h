#ifndef GENERIC_MACROS_H
#define GENERIC_MACROS_H
#include <stdlib.h>
#include <stdio.h>

#define nullStr(str, size) memset(str, '\0', size)
#define zeroArr(arr, size) memset(arr, 0, size)
#define asPercentage(num, den) (int)round((100 * (((double)num) / den)))
#define arrLen(arr)  (sizeof(arr)/(sizeof(arr[0])))

#ifndef MIN
#define MIN(x, y) (x < y ? x : y)
#endif

#ifndef MAX
#define MAX(x, y) (x > y ? x : y)
#endif

// return 1 if little endian
#define isLittleEndian() (((*(short *)"21") & 0xFF) == '2')

// return 1 if big endian
#define IS_BIG_ENDIAN() (((*(short *)"21") & 0xFF) == '1')

#define put_endl printf("\n")
#endif