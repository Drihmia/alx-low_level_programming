#include <stdio.h>
#include <string.h>
#include <ctype.h>
size_t count_characters(const char *str) ;

int main(void)
{
	int i, j, k, l = 0, non_p;
	char n[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	printf("size of buffer is %lu\n", sizeof(n));
	
	while (l + 0  < sizeof(n))
	{
		non_p = isprint(*(n + l));
		if (non_p == 0)
		{
			*(n + l) = '.';
		}
		l++;
	}
	*(n + l) = '\n';
	i = 0;
	while (i < sizeof(n))
	{
		printf("%010x: ", i);
		for (j = i; j < 10 + i; j++)
		{
			printf("%02x", n[j]);
			if (j % 2 == 1)
				printf(" ");
			if ( j + 1 > sizeof(n))
				break;
		}
		for (k = i; k < 10 + i; k++)
			printf("%c", n[k]);
		printf("\n");
		i +=10;
	}
	return (0);
}

size_t count_characters(const char *str) 
{
    size_t count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
