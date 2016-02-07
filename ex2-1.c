#include <stdio.h>
#include <limits.h>

/* 
Exercise 2-1:
Write a program to determine the ranges of char , short , int , and long
variables, both signed and unsigned , by printing appropriate values from
standard headers and by direct computation. Harder if you compute them:
determine the ranges of the various floating-point types. 
*/

/*TODO:
- Figure out why compiler does not recognize 'long long'
- Investigate inaccurate results: why do I get '-1' on an unsigned int?
- Find more elegant solution for suppressing auto-window close in Dos
*/

int main(int argc, char const *argv[])
{
	printf("Number of bits in a char: %d\n\n", CHAR_BIT);

	printf("Minimum value of signed char: %d\n", SCHAR_MIN);
	printf("Maximum value of signed char: %d\n\n", SCHAR_MAX);

	printf("Minimum value of unsigned char: %d\n", CHAR_MIN);
	printf("Maximum value of unsigned char: %d\n\n", (unsigned) UCHAR_MAX);

	printf("Minimum value of short: %d\n", SHRT_MIN);
	printf("Maximum value of short: %d\n", SHRT_MAX);
	printf("Maximum value of unsigned short: %d\n\n", (unsigned) USHRT_MAX);

	printf("Minimum value of int: %d\n", INT_MIN);
	printf("Maximum value of int: %d\n", INT_MAX);
	printf("Maximum value of unsigned int: %d\n\n", (unsigned) UINT_MAX);

	printf("Minimum value of long: %d\n", LONG_MIN);
	printf("Maximum value of long: %d\n", LONG_MAX);
	printf("Maximum value of unsigned long: %d\n\n", (unsigned) ULONG_MAX);

	/* Commented out because compiler does not like long long
	printf("Minimum value of long long: %d\n", LONG_LONG_MIN);
	printf("Maximum value of long long: %d\n", LONG_LONG_MAX);
	printf("Maximum value of unsigned long long: %d\n", ULONG_LONG_MAX);
	*/

	/*int junk;
	printf("Fuck Windows. Press any key to close.");
	junk = getchar();*/
	
	return 0;
}