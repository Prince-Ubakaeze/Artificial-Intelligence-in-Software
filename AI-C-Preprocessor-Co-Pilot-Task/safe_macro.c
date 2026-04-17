#ifndef SAFE_MAX_H
#define SAFE_MAX_H

#include <stdio.h>

#ifdef DEBUG_MODE

#define DEBUG_PRINT(a, b) printf("Values are a = %d, b = %d\n", a, b)

#define MAX(a, b) (DEBUG_PRINT(a, b), ((a) > (b) ? (a) : (b)))

#else

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#endif

#endif
