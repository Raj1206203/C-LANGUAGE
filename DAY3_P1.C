#include<stdio.h>
#include<conio.h>
void main()
{

	int num1,num2,sum,sub;
	float mul,div,mod;
	clrscr();
	printf("\nenter num1:",num1);
	scanf("%d",&num1);
	printf("\nenter num2:",num2);
	scanf("%d",&num2);
	sum = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	div = num1/num2;
	mod = num1%num2;
	printf("\nnum1 is:%d",num1);
	printf("\nnum2 is:%d",num2);
	printf("\nsum is:%d",sum);
	printf("\nmul is:%.2f",mul);
	printf("\ndiv is:%.2f",div);
	printf("\nmod is:%.2f",mod);
	getch();
}