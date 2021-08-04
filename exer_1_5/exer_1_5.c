#include <stdio.h>

#define LOWER 0		/* lower limit of temperature table */	
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

/*print Fahrenheit-Celsius table*/
main()
{
	float fahr, celsius;

	fahr = LOWER;
	printf("Temperature Convesion\n");
	printf("Fahrenheit vs Celsius\n");
	while (fahr <= UPPER) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + STEP; 
	}

	printf("\n");
	for (int i = UPPER; i >= LOWER; i = i - STEP)
	{
		printf("%3d %6.1f\n", i, (5.0/9.0)*(i-32));
	}
	
}