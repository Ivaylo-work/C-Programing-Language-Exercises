#include <stdio.h>

#define LOWER -20		/* lower limit of temperature table */	
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; float-point version */
float celsiusFunc(float fahrenheit, float celsius);
float fahrenheitFunc(float fahrenheit, float celsius);

int main()
{
	float fahr = LOWER, celsius = LOWER;
	printf("Temperature Convesion\n");
	printf("Celsius vs Fahrenheit\n");
	while (celsius <= UPPER) 
	{
		printf("%3.0f %6.1f\n", celsius, celsiusFunc(fahr, celsius));
		celsius = celsius + STEP;
		
	}
	printf("Fahrenheit vs Celsius\n");
	while (fahr <= UPPER) 
	{
		printf("%3.0f %6.1f\n", fahr, fahrenheitFunc(fahr, celsius));
		fahr = fahr + STEP;
		
	}
	return 0;
}

float celsiusFunc(float fahr, float celsius)
{
	fahr = (9.0/5.0) * celsius + 32;
	return fahr;
}

float fahrenheitFunc(float fahr, float celsius)
{
	celsius = (5.0/9.0) * (fahr - 32);
	return celsius; 
}