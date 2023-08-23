#include <stdio.h>
#include <limits.h>

/**
 *    my_atoi - Converts a string to an integer
 *    @str: The input string
 *    Return: The integer value
 */
int my_atoi(const char *str) {
	int result = 0;
	int sign = 1;

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
		// Check for potential overflow
		if (result > (INT_MAX - (*str - '0')) / 10) {
			if (sign == 1) {
				return INT_MAX;
			} else {
				return INT_MIN;
			}
		}

		result = result * 10 + (*str - '0');
		str++;
	}

	return result * sign;
}

int main(void) {
	char str[] = "         ------++++++-----+++++--98"; // Replace this with the string containing your integer
	int num = my_atoi(str);

	printf("The integer is: %d\n", num);

	return 0;
}

