#include "main.h"

/**
 * main - prints _putchar as a message, returns a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, ss;

	ss = sizeof(str) / sizeof(int);
	for (count = 0; count < ss; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
