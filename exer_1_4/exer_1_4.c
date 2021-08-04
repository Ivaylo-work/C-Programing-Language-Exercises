#include <stdio.h>
/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; float-point version */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	celsius = lower;
	printf("Temperature Convesion\n");
	printf("Celsius vs Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step; 
	}
	
}