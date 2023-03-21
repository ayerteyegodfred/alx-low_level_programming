#include "main.h"

/**
 * main - prints Main
 *
 * Description: prints Main
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "_putchar";
	int x = 0;

	for (x = 0; x < 9; x++)
	{
		_putchar(text[x]);
	}
	_putchar('\n');

	return (0);
}
