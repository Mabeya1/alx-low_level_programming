#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string contains only digits.
 * @str: The input string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints the sum of integers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
