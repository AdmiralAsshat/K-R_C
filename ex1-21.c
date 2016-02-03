#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */
#define TAB '\t'
#define SPACE ' '

/* Exercise 1-21. Write a program entab that replaces strings of blanks by the
minimum number of tabs and blanks to achieve the same spacing. Use the
same tab stops as for detab. When either a tab or a single blank would suffice
to reach a tab stop, which should be given preference? */

int get_line(char line[], int maxline);
void entab(char s[]);

int main() {
	int len;
	char line[MAXLINE];			/* current input line */

	while((len = get_line(line, MAXLINE)) > 0)
	{
		entab(line);
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

void entab(char s[])
{
	int tabWidth = 4; /* number of spaces per tab */
	int j, k;
	int numSpaces = 0;

	for(j = 0; s[j] != '\n' ; j++)
	{
		if (s[j] == ' ')
		{
			numSpaces++;

			if (numSpaces % tabWidth == 0)
			{
				putchar(TAB);
			} 
			
		} else {
			if (numSpaces > 0)
			{
				/*if (numSpaces % tabWidth == 0)
				{
					putchar(TAB);
				}*/ 

				for(k = 0; k < (numSpaces % tabWidth); k++)
				{
					putchar(SPACE);
				}
			}
			// Reset string length
			numSpaces = 0;
			putchar(s[j]);
		}
	}
}