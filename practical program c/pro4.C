#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nENter Value of A:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	getch();
}