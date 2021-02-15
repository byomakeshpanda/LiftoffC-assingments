#include <stdio.h>
void main()
{
	int inp,rem,s=0;
	printf("Enter a number\n");
	scanf("%d",&inp);
	for ( ;inp>0;inp=inp/10)
	{
		rem = inp%10;
		s=s+rem;
	}
	printf("Sum of the digits is %d",s);
}
