#include <stdio.h>
void main ()
{
	int a,b,sum,diff,mult;
	float divi;
	printf("Enter 2 numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	diff=a-b;
	mult=a*b;
	divi=a*1.0/b;
	printf("\nSum = %d\nDiffernce = %d\nProduct = %d\nDivision = %f",sum,diff,mult,divi);
	
}

