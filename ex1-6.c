#include <stdio.h>

int main(void)
{
	printf("Press Enter or Ctrl+D\n");
	printf("'getchar() != EOF' = %d\n", (getchar() != EOF));
	return 0;
}
