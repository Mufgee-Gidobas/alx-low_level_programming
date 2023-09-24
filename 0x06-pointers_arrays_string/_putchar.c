#include<unistd.h>

/**
*_putchar - write the character c to stdout
*@c: the character to print
*
*Return: on success 1.
*on Error: -1 is returnd, and error is set appropriately.
*/

int _putchar(char c)
{
	return (write(1. &c. 1));
}
