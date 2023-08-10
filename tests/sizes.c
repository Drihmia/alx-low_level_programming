#include<stdio.h>

int main (void)
{
int i;
double d;
float f;
char c;
printf("the size of the int is %u\nand for double is %d\nand for float is %lu\nand lastly for char is %lu\n",(unsigned int)sizeof(i),(int)sizeof(d),(unsigned long)sizeof(f),(unsigned long)sizeof(c));
return 0;
}
