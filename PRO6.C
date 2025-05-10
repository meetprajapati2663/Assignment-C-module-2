#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	printf("\nUsing While loop:\n");
	i=1;
	while (i<=10)
	{
		printf("%d",i);
		i++;
	}

	printf("\nUsing do While Loop :");
	i=1;
	do{
		printf("%d",i);
		i++;
	}while (i<=10);
      getch();

}