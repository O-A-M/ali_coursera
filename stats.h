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
* main() - The main entry point for your program
*  print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
*   print_array() - Given an array of data and a length, prints the array to the screen
*   find_median() - Given an array of data and a length, returns the median value
*   find_mean() - Given an array of data and a length, returns the mean
*   find_maximum() - Given an array of data and a length, returns the maximum
*   find_minimum() - Given an array of data and a length, returns the minimum
*   sort_array() - Given an array of data and a length, sorts the array from largest to smallest.
*
* @author osama ali
* @date 26/9
* 
*
*/



#include <stdlib.h>
#include <stdio.h>

void print_array(unsigned char* ptr, int length)
{
	int i;
	for (i = 0; i<length; i++)
	{
		printf("%d ", ptr[i]);
	}
}

unsigned char find_mean(unsigned char* ptr, int length)
{
	int i;
	int total = 0;
	for (i = 0; i<length; i++)
	{
		total += ptr[i];
	}
	return total / length;
}

void sort_array(unsigned char* ptr, int length)
{
	int i = 0, j = 0, temp;
	for (i = 0; i<length; i++)
	{
		for (j = 0; j<(length - i - 1); j++)
		{
			if (ptr[j]<ptr[j + 1])
			{
				temp = ptr[j + 1];
				ptr[j + 1] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}

unsigned char find_median(unsigned char* ptr, int length)
{
	sort_array(ptr, length);
	if (length % 2 == 0)
		return ptr[length / 2];
	else
		return ptr[(length + 1) / 2];
}


unsigned char find_maximum(unsigned char* ptr, int length)
{
	int max = ptr[0];
	int i;
	for (i = 1; i<(length); i++)
		max = (ptr[i]>max) ? ptr[i] : max;
	return max;
}

unsigned char find_minimum(unsigned char* ptr, int length)
{
	int min = ptr[0];
	int i;
	for (i = 1; i<(length); i++)
		min = (ptr[i]<min) ? ptr[i] : min;
	return min;
}

void print_statistics(unsigned char* ptr, int length)
{
	printf("\n median is: %d ", find_median(ptr, length));
	printf("\n mean is: %d ", find_mean(ptr, length));
	printf("\n maximum is: %d ", find_maximum(ptr, length));
	printf("\n minimum is: %d ", find_minimum(ptr, length));
}