#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	//int i = 0;

	//while (s[i] != '\0')
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		*(strchr(s, 'a')) = '4';
		//strchr(s, 'a')[i + 1] = '4';
		printf("%c", *strchr(s, 'a'));
	//	i++;
	printf("%s", s);
	return (0);
}

