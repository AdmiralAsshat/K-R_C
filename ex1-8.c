#include <stdio.h>

// Count blanks, tabs, and newlines

int main(void)
{
	int c, blanks, tabs, newlines;

	c = blanks = tabs = newlines = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			blanks++;
		else if(c == '\t')
			tabs++;
		else if (c == '\n')
			newlines++;
	}

	printf("Blanks: %d; Tabs: %d; Newlines: %d", blanks, tabs, newlines);

	return 0;
}
