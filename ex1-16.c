#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-16. Revise the main routine of the longest-line program so it will 
correctly print the length of arbitrarily long input lines, and as much as possible 
of the text. */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = get_line(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)	/* there was a line*/
		// Is this what they mean by 'correctly print the length'?
		printf("Longest length: %d\nContents: %s", max, longest);
	
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
