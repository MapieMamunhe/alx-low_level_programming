#include <stdio.h>
/**
  * main - output sizes of data types
  *
  * Description: Write a C program that prints the
  * size of various types on the computer it is compiled and run on
  *
  * Return: 0
  */
int main(void)
{
	char c;
	int b;
	long int b1;
	long long int d;
	float d1;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(b));
	printf("Size of a long int: %i byte(s)\n", sizeof(b1));
	printf("Size of a long long int: %i byte(s)\n", sizeof(d));
	printf("Size of a float: %i byte(s)\n", sizeof(d1));
	return (0);
}
