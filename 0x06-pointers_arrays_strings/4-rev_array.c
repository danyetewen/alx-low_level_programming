#include "main.h"

/**
 * reverse_arry - a function that reverse the content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return nothing
*/

void reverse_ array(int *a, int n)
{
	int *temp, f, s, e;

	temp = a;
	for (f = 0; f < n; f++)
		temp++;
	for (e = 0; e <= n / 2; e++)
	{
		s = a[e];
		a[e] = *temp;
		*temp =  s;
		temp--;
	}
}
