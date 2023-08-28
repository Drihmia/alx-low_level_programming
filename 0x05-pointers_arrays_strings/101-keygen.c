#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function Prototypes */
int* generateAllPossibilities(void);

int main(void) {
    srand(time(NULL)); // Initialize random seed using the current time

    int* possibilities = generateAllPossibilities();

    // Use the possibilities array as needed

    free(possibilities); // Remember to free the allocated memory

    return 0;
}

/**
 * generateAllPossibilities - Generates all possible 4-digit numbers and returns them as an array.
 * Return: Pointer to the array of possible 4-digit numbers.
 */
int* generateAllPossibilities(void) {
    int* possibilities = (int*)malloc(10000 * sizeof(int)); // Allocate memory for the array

    if (possibilities == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 10000; ++i) {
        possibilities[i] = i; // Store the current 4-digit number in the array
    }

    return possibilities;
}

