#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-19. Write a function reverse(s) that reverses the character
string s. Use it to write a program that reverses its input a line at a time. */

/*
TODO: 
- Rewrite reverse function without length arg passed to follow prompt
- Figure out why garbage characters show up
*/

int get_line(char line[], int maxline);
int reverse(char line[], int len);

int main(void)
{
	int len;
	char line[MAXLINE];

	while((len = get_line(line, MAXLINE)) > 0)
	{
		reverse(line, len);
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

int reverse(char s[], int len)
{
	int j,k = 0;
	char temp[len];

	for(j = len-2; j >= 0; j--)
	// (len-2) to strip \n and \0
	{
		temp[k++] = s[j];
	}

	printf("%s\n",temp);
}