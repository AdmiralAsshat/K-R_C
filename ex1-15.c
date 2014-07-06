#include <stdio.h>

/* Exercise 1-15: Rewrite ex.1-13 using functions

#define LOWER 0
#define UPPER 300
#define STEP 20

float convert(float f);

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table*/
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	fahr = lower;
	printf("F\tC\n");
	while (fahr <= upper)
	{
		celsius = convert(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

float convert(float f)
{
	float c;

	c = (5.0 / 9.0) * (f - 32.0);

	return c;
}
