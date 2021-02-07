#include <stdio.h>
void main()
{
	float cels,fahr;
	printf("Enter the temperature in degree celsius\n");
	scanf("%f",&cels);
	fahr=cels*1.8+32;
	printf("\nTemperature in Fahrenheit is = %f",fahr);
}
