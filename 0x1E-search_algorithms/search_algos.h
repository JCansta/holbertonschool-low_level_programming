#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, int first, int last);
int search(int *array, size_t first, size_t last, int value);
int jump_search(int *array, size_t size, int value);

#endif
