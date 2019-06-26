#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float x,y;
	printf("Enter Coefficient of x^2 :");
	scanf("%d",&a);
	printf("Enter  x :");
	scanf("%d",&b);
	printf("Enter constant term :");
	scanf("%d",&c);
	D=b*b-4*a*c;
	if(D<0){
	printf("Both roots are imaginary");
}
	if(D==0)
	{
	printf("Both roots are equal");
	x=-b/(2.0*a);
	printf("Roots of %f",x);
	
}
	if(D>0)
	{
		printf("Roots are real and distinct");
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("\n Roots are: %f, %f",x,y);
		
	}
	
	
}

