//write a program to find given year is leap year or not
#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	printf("enter a year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is a leap year",a);
    	{
    		else
			printf("%d the nextleap year",(a+4));
		}
	}
	else
	{
		printf("%d is not a leap year",a);

		{
			printf("%d last leap year",a-4);
		}
	}
}
