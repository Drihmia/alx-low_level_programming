/* Rule 1: Adhere to C89 standards and Betty style of coding in your C programs. */

#include <stdio.h>

/* Rule 2: Always provide function prototypes before using or defining functions in your code. */
int findCharSet(char *charSet, int setSize);

/* Rule 3: Include 'void' within parentheses for clarity if 'main' doesn't take parameters. */
int main(void) {
	char charSet[5];  // Adjust size as needed
	int setSize = sizeof(charSet) / sizeof(charSet[0]);

	int result = findCharSet(charSet, setSize);

	if (result) {
		printf("Character set found: ");
		for (int i = 0; i < setSize; i++) {
			printf("%c ", charSet[i]);
		}
		printf("\n");
	} else {
		printf("No character set found for the given sum.\n");
	}

	return 0;
}

/* Rule 8: Use proper Doxygen-style documentation for functions. */
/**
 * findCharSet - Find a set of characters with a specific ASCII value sum
 * @charSet: Array to store the characters
 * @setSize: Size of the character set
 * Return: 1 if a valid character set is found, 0 otherwise
 */
int findCharSet(char *charSet, int setSize) {
	if (setSize == 0) {
		return 0;
	}

	int targetSum = 2772;
	charSet[setSize - 1] = targetSum; // Last character will be the remaining sum

	for (int i = 0; i < setSize - 1; i++) {
		charSet[i] = 1; // Start with a base value for each character
		targetSum -= charSet[i];
	}

	// Distribute the remaining sum among characters
	for (int i = 0; i < setSize - 1; i++) {
		int diff = 127 - charSet[i]; // ASCII value limit
		if (targetSum >= diff) {
			charSet[i] += diff;
			targetSum -= diff;
		} else {
			charSet[i] += targetSum;
			break;
		}
	}

	return targetSum == 0;
}

