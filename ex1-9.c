#include <stdio.h>

int main(void)
{
	int c;
	int spaces = 0;

	while((c = getchar()) != EOF)
	{
		if(c != ' ')
		{
			putchar(c);
			spaces = 0;
		} else if (c == ' ' && spaces > 0)
		{
			continue;
		} else if (c == ' ')
		{
			putchar(c);
			spaces++;
		}
	}
	return 0;
}
