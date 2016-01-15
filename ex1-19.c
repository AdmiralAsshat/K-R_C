#include <stdio.h>
#define MAXLINE 1000

/* Exercise 1-19. Write a function reverse(s) that reverses the character
string s. Use it to write a program that reverses its input a line at a time. */


int get_line(char line[], int maxline);
int reverse(char line[]);

int main(void)
{
	int len;
	char line[MAXLINE];

	while((len = get_line(line, MAXLINE)) > 0)
	{
		reverse(line);
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

int reverse(char s[])
{
	int j,k, len; 
	k = 0;
	char temp[MAXLINE] = "\0"; /* Zero out memory before write */

	// First loop, find length of string
	for(j = 0; s[j] != '\n'; j++)
		;
	len = j;

	// Second loop, count backwards from string len
	for(j = len; j > 0 ; j--)
		temp[k++] = s[j-1]; /* Arrays start at index 0 */

	printf("%s\n",temp);
}