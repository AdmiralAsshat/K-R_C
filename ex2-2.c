#include <stdio.h>
#define MAXLINE 1000

/*
for(i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
    s[i] = c;
*/

/* Exercise 2-2.  Write a loop equivalent to the for loop above without using && or || . */

int main(void)
{
	int i = 0;
	int c;
	int lim = MAXLINE;
	char line[MAXLINE];

	while (i < lim-1)
	{
		c = getchar();
		if(c == EOF)
			break;
		else if (c == '\n')
			break;
		else
			line[i] = c;
		i++;
	}

	line[i] = '\0';	
}