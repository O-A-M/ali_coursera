#include <stdlib.h>
#include <stdio.h>

void print_array(unsigned int* n, unsigned char arr[])
{
    for (int i = 0; i < n; ++i)
	{
		printf("Enter the element Number %d: ", i + 1);
		scanf("%c", &arr[i]);
	}

}

unsigned char find_maximum(unsigned int* n, unsigned char arr)
{
	int i;

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	return arr[0];

}

unsigned char find_minimum(unsigned int* n, unsigned char arr)
{
	int i;

	for (i = 1; i < n; ++i)
	{
		if (arr[0] > arr[i])
			arr[0] = arr[i];
	}
	return arr[0];

}

unsigned char find_mean(unsigned int* n, unsigned char arr)
{
	int sum = 0, i;
	for (i = 0; i<n; i++)
		sum += arr[i];
	return((float)sum / n);
}

unsigned char find_median(unsigned int* n, unsigned char arr)
{
	int temp;
	int i, j;
	// the following two loops sort the array x in ascending order
	for (i = 0; i<n - 1; i++)
	{
		for (j = i + 1; j<n; j++)
		{
			if (arr[j] < arr[i])
			{
				// swap elements
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	if (n % 2 == 0)
	{
		// if there is an even number of elements, return mean of the two elements in the middle
		return((arr[n / 2] + arr[n / 2 - 1]) / 2.0);
	}
	else
	{
		// else return the element in the middle
		return arr[n / 2];
	}
}

void print_statistics(unsigned int* n, unsigned char arr)
{
	printf("please enter the number of elements \n");
	scanf("%d", &n);

	printf("maximum=%c\n", find_maximum(n, arr[n]));
	printf("minimum=%c\n", find_minimum(n, arr[n]));
	printf("mean=%c\n", find_mean(n, arr[n]));
	printf("median=%c\n", find_median(n, arr[n]));
}

void sort_array(unsigned int* n, unsigned char arr)
{
	int i, j, a;
	for (i = 0; i < n; ++i)
	{

		for (j = i + 1; j < n; ++j)
		{

			if (arr[i] > arr[j])
			{

				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;

			}

		}

	}

	printf("The numbers arranged in ascending order are given below \n");
	for (i = 0; i < n; ++i)
		printf("%d\n", arr[i]);

}

void main()
{
	unsigned char arr[];
	unsigned int* n;
	printf("Enter total number of elements: ");
	scanf("%d", &n);
	printf("\n");

	print_array(n, arr[n]);
	find_maximum(n, arr[n]);
	find_minimum(n, arr[n]);
	find_mean(n, arr[n]);
	find_median(n, arr[n]);
	print_statistics(n, arr[n]);
	sort_array(n, arr[n]);
}
