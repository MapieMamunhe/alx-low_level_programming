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
	unsigned int b1;
	long d;
	float d1;

	printf("Size of a char : %li byte(s)\n", sizeof(c));
	printf("Size of a int : %li byte(s)\n", sizeof(b));
	printf("Size of a long int : %li byte(s)\n", sizeof(b1));
	printf("Size of a long long int: %li byte(s)\n", sizeof(d));
	printf("Size of a float : %li byte(s)\n", sizeof(d1));
	return (0);
}
