#include<stdio.h>
#include<conio.h>
void main()
{
	int num=10;
	int *pt;
	pt=&num;
	*pt=20;
	printf("modified value of number:%d",num);
	getch();
}