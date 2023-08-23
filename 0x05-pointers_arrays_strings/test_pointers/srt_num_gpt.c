#include <stdio.h>

/**
 *    string_to_int - Converts a string to an integer
 *    @str: The input string
 *    Return: The integer value
 */
int string_to_int(const char *str) {
	int result = 0;
	int sign = 1; // To handle negative numbers

	// Skip leading whitespace
	while (*str == ' ') {
		str++;
	}

	// Handle optional sign
	if (*str == '-') {
		sign = -1;
		str++;
	} else if (*str == '+') {
		str++;
	}

	// Convert characters to integer
	while (*str >= '0' && *str <= '9') {
		result = result * 10 + (*str - '0');
		str++;
	}

	return result * sign;
}

int main(void) {
	char str[] = "          ------++++++-----+++++--98"; // Replace this with the string containing your integer
	int num = string_to_int(str);

	printf("The integer is: %d\n", num);

	return 0;
}

