#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */
#define TAB '\t'
#define SPACE '#'

/* Exercise 1-20. Write a program detab that replaces tabs in the input with the
proper number of blanks to space to the next tab stop. Assume a fixed set of
tab stops, say every n columns. Should n be a variable or a symbolic parameter? */

int get_line(char line[], int maxline);
void detab(char s[]);

int main() {
	int len;
	char line[MAXLINE];			/* current input line */

	while((len = get_line(line, MAXLINE)) > 0)
	{
		detab(line);
	}

	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void detab(char s[])
{
	int tabWidth = 5; /*sample value for 'n' */
	int j, k;
	// char detabbedLine[MAXLINE];

	for(j = 0; s[j] != '\n' ; j++)
	{
		if (s[j] == TAB)
		{
			for(k = 0; k < tabWidth; k++)
				putchar(SPACE);
		} else {
			putchar(s[j]);
		}
	}
}