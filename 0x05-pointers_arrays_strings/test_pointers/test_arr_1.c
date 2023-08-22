#include <stdio.h>
void rev_string(char *s) ;

void rev_string(char *s) 
{
	int length = 0;
	int i, j;
	char temp;

	// Calculate the length of the string
	while (s[length] != '\0') 
	{
		length++;
	}


	// Reverse the string in place
	for (i = 0, j = length - 1; i < j; i++, j--) 
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	// Print the reversed string
	for (i = 0; i < length; i++) 
	{
		putchar(s[i]);
	}
	putchar('\n');
}

int main(void) {
	char str[] = "Hello, world!";
	rev_string(str);
	return 0;
}

