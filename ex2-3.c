#include <stdio.h>
#include <ctype.h> /* tolower(c) and isdigit(c) */

/*
Exercise 2-3. Write the function htoi ( s), which converts a string of hexadecimal
digits (including an optional Ox or ox) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F.
*/

/*TODO:
- Handle string input
*/

unsigned int htoi(const char s[]);

int main(int argc, char const *argv[])
{
/*
	int output;
	output = htoi(argv[1]);
*/

	char *test1 = "99";
	char *test2 = "AC";
	char *test3 = "0xAC";
	char *test4 = "0XFF";
	char *test5 = "0X99";

	printf("Hex:%s; Decimal:%d\n", test1, htoi(test1));
	printf("Hex:%s; Decimal:%d\n", test2, htoi(test2));
	printf("Hex:%s; Decimal:%d\n", test3, htoi(test3));
	printf("Hex:%s; Decimal:%d\n", test4, htoi(test4));
	printf("Hex:%s; Decimal:%d\n", test5, htoi(test5));

	return 0;
}


unsigned int htoi(const char s[])
{
	unsigned int tot = 0;
	for(int i=0; s[i] != '\0'; i++)
	{
		int val;
		tot *= 16;
		if (tolower(s[i]) == 'x' && s[i-1] == '0')
			continue;

		if (s[i] == '0' && tolower(s[i+1]) == 'x')
			continue;

		if (isdigit(s[i]))
			val = s[i] - '0';
		else
			val = 10 + (tolower(s[i]) - 'a');

		tot += val;
	}

	return tot;
}