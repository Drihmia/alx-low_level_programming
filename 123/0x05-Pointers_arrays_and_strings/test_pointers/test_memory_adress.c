#include <stdio.h>

int main() {
	int n = 42;
	int *ptr = &n; // Get the memory address of 'n'

	printf("Memory address of 'n': %p\n", (void *)ptr); // Cast the pointer to void *

	return 0;
}
