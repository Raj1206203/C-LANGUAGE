#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	float s;
	clrscr();

	printf("enter p:");
	scanf("%d",&p);
	printf("enter r:");
	scanf("%d",&r);
	printf("enter n:");
	scanf("%d",&n);
	s = p*r*n/100;
	printf("simple intrest is:%f",s);




	getch();
}