#include <stdio.h>

/* Function prototypes */
void printHex2Chars(char c);
void printHex8Chars(int num);
void printPrintableChar(char c);

int main(void) {
	char character = 'A';
	int number = 255;

	printf("Printing hexadecimal values:\n");
	printHex2Chars(character);
	printHex8Chars(number);
	printf("\n");

	printf("Printing printable character:\n");
	printPrintableChar(character);

	return 0;
}

/* Print hexadecimal value of a character using 2 characters */
void printHex2Chars(char c) {
	printf("Hex (2 chars) of '%c': %02X\n", c, c);
}

/* Print hexadecimal value of an integer using 8 characters */
void printHex8Chars(int num) {
	printf("Hex (8 chars) of %d: %08X\n", num, num);
}

/* Print if a character is printable or not */
void printPrintableChar(char c) {
	if (c >= 32 && c <= 126) {
		printf("'%c' is a printable character.\n", c);
	} else {
		printf("'%c' is not a printable character.\n", c);
	}
}

