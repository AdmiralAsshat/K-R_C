#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each
line of input, and to delete entirely blank lines. */

int get_line(char line[], int maxline);

int main(void)
{
	int len, i;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = get_line(line, MAXLINE)) > 0)
	{
		// Start from end of string, loop as long as whitespace char
		for (i=len; (line[i] == '\t' || line[i] == ' ') || 
			line[i] == '\n' || line[i] == '\0'; i--)
			;	// Nothing to do in loop, we just want the array position

		// Hack to fix off-by-one results
		i--;

		// Make "proper" string even though I'm not printing the line
		line[++i]='\0';
		line[++i]='\n';

		// Printing the line does not make the end of line obvious
		// Print length instead to verify results
		printf("Final length:%d\n", i);
	}

	return 0;
}

/* get_line: read a line, determine its length */
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
