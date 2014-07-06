/* Exercise 1-14: Write a program to print a histogram
of the frequencies of different characters in input */

/*TODO: Array only set for lower-case chars at the moment;
Consider adding upper-case as well. */

#include <stdio.h>

int main(void)
{
	int c, converted;
	int i,j = 0;
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

		//if(96 < c < 123)
		if(c > 96 && c < 123)
		{
			letters[converted]++;
		} else {
			letters[0]++;
		}
	}

	printf("Other: %d\n", letters[0]);

	for (i = 1 ; i < 27; i++)
	{
		//printf("%c: %d\n", (i+96), letters[i]);
		printf("%c: ", (i+96));

		for (j = 0; j < letters[i] ; j++)
		{
			printf("X ");
		}

		printf("\n");
	}

	return 0;
}
