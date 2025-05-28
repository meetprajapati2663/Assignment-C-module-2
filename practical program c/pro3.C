#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\nENter Value of A:");
	scanf("%d",&a);
	printf("\nENter Value of B:");
	scanf("%d",&b);
	c=a+b;
	printf("\nAddition of A &b is:%d",c);
	if(a>0 && b>0){
	printf("\nA & B are positive\n");
	}
	if(a>b)
	{
		printf("\nA is Max");
	}
	else
	{
		printf("\nB is Max");
	}
	getch();
}
