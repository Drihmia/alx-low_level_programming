#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int i, j, l;
	
	/* iterator for all chars*/
	i = 0;
	/* iterator for - sign only*/
	j = 0;
	sign = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' && s[i] > '9')
		{
			if (s[i] == '-')
			{
				i++;
				j++;
			}
			else
				i++;
		}
		else
		{
			if(i % 2 != 0)
				sign = -1;



