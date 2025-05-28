#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("\nPrint 1 to 10 using for loop");
	for(i=0;i<10;i++)
	{
		printf("\n%d",i);
	};
	printf("\nPrint 1 to 10 using while loop");
	i=1;
	while(i<10)
	{
		printf("\n%d",i);
		i++;
	}
	printf("\nPrint 1 to 10 using do while loop");
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i<10);
	getch();
}