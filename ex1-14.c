/* Exercise 1-14: Write a program to print a histogram
of the frequencies of different characters in input */

#include <stdio.h>

int main(void)
{
	int c, converted;
	int i = 0;
	int letters[27];

	for (i = 0; i < 27; i++)
	{
		letters[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		/* Int value of 'a' is 97;
		get 'a' to be nice index for array */
		converted = c - 96;	

		if(96 < c < 123)
		{
			letters[converted]++;
		} else {
			letters[0]++;
		}
	}

	printf("Other: %d\n", letters[0]);

	for (i = 1 ; i < 27; i++)
	{
		printf("%c: %d\n", (i+96), letters[i]);
	}

	return 0;
}
