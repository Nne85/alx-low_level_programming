#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_search2(int *array, size_t low, size_t high, int value);

#endif
