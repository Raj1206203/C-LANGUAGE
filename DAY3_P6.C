#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r;
	clrscr();
	printf("enter r:");
	scanf("%f",&r);

	r = 2*PI*r;
	printf("area of circle is:%.2f",r);
	getch();
}