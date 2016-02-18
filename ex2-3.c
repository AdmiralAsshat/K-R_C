#include <stdio.h>
#include <ctype.h> /* tolower(c) and isdigit(c) */

/*
Exercise 2-3. Write the function htoi ( s), which converts a string of hexadecimal
digits (including an optional Ox or ox) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F.
*/

unsigned int htoi(const char s[]);

int main(int argc, char const *argv[])
{
	int output;

	output = htoi(argv[1]);

	printf("%d\n", output);
	return 0;
}


unsigned int htoi(const char *s)
/*{
	int i, j = 0;

	for(int i = 0; s[i] != '\0'; i++)
	{
		int c = tolower(s[i]);

		if c < 16
	}
	int tens = (s / 16) * 10;
	int ones = (s % 16);

	return (tens + ones);
}
*/
{
	unsigned int tot = 0;
	for(int i=0; s[i]; i++)
	{
		int val;
		tot *= 16;
		if(isdigit(s[i]))
			val = s[i] - '0';
		else
			val = 10 + (toupper(s[i]) - 'A');

		tot += val;
	}

	return tot;
}