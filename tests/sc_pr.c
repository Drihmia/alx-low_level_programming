#include <stdio.h>
int age;
char M[]="Morocco";
int main(void)
{
	printf("Enter your age\t");
	scanf("%d",&age);
	printf("Your age is %d \t and you are from %s\n",age,M);
	return 0;
}
