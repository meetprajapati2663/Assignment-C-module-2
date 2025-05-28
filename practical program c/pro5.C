#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nENter 1 to 12 number(JAN to DEC)");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nJANUARY");
			break;
		case 2:
			printf("\nFEBRUARY");
			break;
		case 3:
			printf("\nMARCH");
			break;
		case 4:
			printf("\nAPRIL");
			break;
		case 5:
			printf("\nMAY");
			break;
		case 6:
			printf("\nJUNE");
			break;
		case 7:
			printf("\nJULY");
			break;
		case 8:
			printf("\nAUGUST");
			break;
		case 9:
			printf("\nSEPTEMBER");
			break;
		case 10:
			printf("\nOCTOBER");
			break;
		case 11:
			printf("\nNOVEMBER");
			break;
		case 12:
			printf("\nDECEMBER");
			break;
		default:
			printf("\nWrong Choice");
	}
	getch();
}