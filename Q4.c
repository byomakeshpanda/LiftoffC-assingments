#include <stdio.h>
void main()
{
	float phy,che,math,bio,comp,per;
	printf("Enter your marks in physics chemistry mathematics biology and computer respectively\n");
	scanf("%f%f%f%f%f",&phy,&che,&math,&bio,&comp);
	per = (phy+che+math+bio+comp)/5.0;
	printf("Your percentage is %f",per);
	if (per>=90)
		printf("Grade = A");
	else if (per>=80 && per<90)
		printf("Grade = B");
	else if (per>=70 && per<80)
		printf("Grade = C");
	else if (per>=60 && per<70)
		printf("Grade = D");
	else if (per>=50 && per<60)
		printf("Grade = E");
	else if (per>=40 && per<50)
		printf("Grade = F");
	else 
		{
			printf("\nPlease Enter proper values");
		}
		
}
