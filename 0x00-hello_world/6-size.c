#include<stdio.h>
/**
 * main - A programm that prints the size of computer various
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char; %lu byte(s)", (unsigned long)sizeof(char));
	printf("Size of an int; %lu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int; %lu byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long; %lu byte(s)", (unsigned long)sizeof(long long));
	printf("Size of a float; %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
