#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table*/
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = upper;
	printf("C\tF\n");
	while (celsius >= lower)
	{
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius -= step;
	}

	return 0;
}
