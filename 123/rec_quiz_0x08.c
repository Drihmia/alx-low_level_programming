#include <stdio.h>

int printt(int nb)
{
	if (nb < 0) 
	{
		return (0);
	}
	printf("%d", nb + printt(nb - 1));
	nb --;
	return (nb);
}


int print(int nb, int level)
{
	printf("\n\t\t\tEnter level %d nb= %d", level, nb);
	if (nb < 0) 
	{
		printf("\n\tExit level %d nb =%d return 0", level, nb);
		return (0);
	}
	printf("\nOriginal Output  level %d \t\t\t\t\t\tnb=%d",level, nb + print(nb - 1, level+1));
	nb --;
	printf("\n\tExit level %d nb=%d", level, nb);
	return (nb);
}

int main(void)
{
	int level=0;
	print(4, level);
	printf("\n");
	return (0);
}


