#include<stdio.h>
#include<unistd.h>
/**
 * main- a c programm using unix to prine a lineto std error without put, printf funcions
 * Return: 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" -Dora Korpar, 2015-10-19", 59);
return (1);
}
