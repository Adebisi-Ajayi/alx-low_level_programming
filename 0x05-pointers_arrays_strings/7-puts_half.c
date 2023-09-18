#inclusde "main.h"

/**
 * puts_half - puts half of a string
 * @str: string
 *Return: void
 */
void puts_half(char *str)
{
	int leng = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
