#include <stdio.h>
void main()
{
	float rad,dia,circum,area;
	printf("Enter the radius of the circle\n");
	scanf("%f",&rad);
	dia = (2.0*rad);
	circum = 2.0*3.14*rad;
	area = 3.14*rad*rad;
	printf("\nDiameter = %f\nCircumference = %f\nArea = %f",rad,circum,area);
	
}
