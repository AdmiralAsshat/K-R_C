/* Write a program to print a histogram of the lengths
of words in its input */

/*TODO: All nonwhite chars count towards len,
Rewrite to exclude punctuation */

#include <stdio.h>

#define SIZE 20

int main(void)
{
	int c, i, len;
	int words[SIZE];

	len = 0;

	// initialize array
	for (i = 0; i < SIZE; i++)
	{
		words[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		// new word; record len into array then reset
		if (c == ' ' || c == '\n' || c == '\t')
		{
			words[len]++;
			len = 0;
		} else {
		// in a word; increment length
			len++;
		}
	}

	/* Debug Output
	for (i = 0; i < SIZE; i++)
	{
		printf("Frequency of %d length: %d\n", i,words[i]); 
	}
	*/

	for (i = 0; i < SIZE; i++)
	{
		printf("%2d: ", i);

		for (int j = 0; j < words[i] ; j++)
		{
			printf("X ");
		}

		printf("\n");
	}
	
	return 0;
}
