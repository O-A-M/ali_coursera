/******************************************************************************
* Copyright (C) 2017 by Alex Fosdick - University of Colorado
*
* Redistribution, modification or use of this software in source or binary
* forms is permitted as long as the files maintain this copyright. Users are
* permitted to modify this and use it to learn about the field of embedded
* software. Alex Fosdick and the University of Colorado are not liable for any
* misuse of this material.
*
*****************************************************************************/

/*
* @How to find mean, median, maximum and minimum
*
* @author osama ali
* @date 26/9
*/

#include <stdlib.h>
#include <stdio.h>
#include <stats.h>

#define length (50)
void main()
{
	unsigned char arr[length] = { 179, 55, 67, 51, 78, 55, 200, 86, 67, 90, 234,
		234, 162, 179, 199, 141, 99, 234, 175, 130, 133, 145, 246, 241, 68, 12, 236, 127, 89,
		255, 97, 34, 55, 2, 45, 65, 5, 36, 248, 1, 44, 56, 199, 143, 67, 52, 0, 89, 31, 0 };

	printf("array: \n");
	print_array(arr, length);
	printf("\n");
	sort_array(arr, length);
	find_median(arr, length);
	find_mean(arr, length);
	find_maximum(arr, length);
	find_minimum(arr, length);
	print_statistics(arr, length);
	printf("\n\nthe sorted array:\n ");
	print_array(arr, length);
}
