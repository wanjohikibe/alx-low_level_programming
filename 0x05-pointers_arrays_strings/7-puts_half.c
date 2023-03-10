#include "main.h"
/**
 * puts_half - Prints half the string
 * @str: String to half
 * Return: None
 */
void puts_half(char *str)
{
	int i, count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	} else
	{
		i = (count - 1) / 2;
	}
	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
