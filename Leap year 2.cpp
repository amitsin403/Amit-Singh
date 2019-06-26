#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter a number");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
		printf("leap year");
		else
		printf("Not a leap year");
	}
	else
	{
		if(year%4==0)
		printf("leap year");
		else
		printf("Not a leap year");
		
	}
	getch();
}















