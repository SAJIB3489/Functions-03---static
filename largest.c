#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

unsigned int largestNumber(i) {
    static int y = 0;

    if (i > y) {
        y = i;
    }
    return y;
}