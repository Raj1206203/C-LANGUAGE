#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r;
	clrscr();
	printf("enter r:");
	scanf("%f",&r);

	r= PI*r*r;
	printf("the r is:%.2f",r);
	getch();


}
