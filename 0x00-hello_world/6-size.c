#include <stdio.h>

/*
 *prints the size of various types on the computer it is compiled and run on
 */

/**
 *main - entry point
 *declares variables to output size
 *trigger warning with m32 option as return type of sizeof is u not lu as with
 *m64
 *Return: 0
 */

int main(void)
{
	char charType;
	int integerType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %ld byte\(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
