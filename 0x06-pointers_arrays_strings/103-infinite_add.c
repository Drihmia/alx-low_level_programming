#include "main.h"
#include <string.h>
void reverse_string(char *a);


/**
 * infinite_add - adds two numbers.
 * @n1: 1st string number.
 * @n2: 2nd string number.
 * @r: the buffer that the function will use to store the result.
 * @size_r:buffer size.
 * Return: a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, overflow = 0, di_1, di_2, sum, len1, len2;

	len1 = strlen(n1);
	len2 = strlen(n2);
	if (len1 + 1 > size_r || len2 + 1  > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || overflow == 0)
	{
		if (i >= 0)
			di_1 = n1[i] - '0';
		else
			di_1 = 0;
		if (j >= 0)
			di_2 = n2[j] - '0';
		else
			di_2 = 0;

		sum = di_1 + di_2 + overflow;
		overflow = sum / 10;
		r[k] = sum % 10 + '0';
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	reverse_string(r);
	return (r);
}

/**
 * reverse_string - reverses string.
 * @a: pointer to string.
 * Return: None.
 */

void reverse_string(char *a)
{
	int end = strlen(a), start = 0, tmp;

	while (end > start)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		end--;
		start++;
	}
}
