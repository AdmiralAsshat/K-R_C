#include <stdio.h>
#define MAXLINE 1000
#define FOLDLINE 40     /* Fold line after this many chars */

/*Exercise 1-22. Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. Make sure your program does something intelligent with very
long lines, and if there are no blanks or tabs before the specified column. */

/*TODO:
- Fix fold to handle line if no space before foldpoint
- Figure out how to fold multiple times if line length > (FOLDLINE * 2)
*/

int get_line(char line[], int maxline);
void fold(char s[]);

int main() {
	int len;
	char line[MAXLINE];			/* current input line */

	while((len = get_line(line, MAXLINE)) > 0)
	{
		if (len < FOLDLINE)
			printf("No change:\n%s\n", line);
		else
			fold(line);
	}

	return 0;
}

void fold(char s[])
{
	int j;
	int lastSpace = 0; /* Position of last space before foldpoint */

	/* Loop through line until fold point, 
	keep track of positon of blank char,
	Fold on the last blank */

	for(j = 0; j < FOLDLINE; j++)
	{
		if(s[j] == ' ' || s[j] == '\t')
			lastSpace = j;
	}

	if (lastSpace > 0)
		s[lastSpace] = '\n';

	printf("%s\n", s);
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
