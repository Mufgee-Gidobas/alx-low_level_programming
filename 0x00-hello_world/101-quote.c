#include<stdio.h>
#include<unistd.h>
/**
 * main - A c programm that uses unix to prints line to std error
 * Return: 1 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
return  (1);
}
