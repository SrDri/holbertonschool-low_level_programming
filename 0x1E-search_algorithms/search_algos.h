#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search_bin(int *array, int beg, int end, int search_value);

#endif /* _SEARCH_ALGOS_H_ */
