/*C program to print number of days in a month using switch case*/
#include<stdio.h>
int main(void)
{
	int month ; 
	printf("pleas enter number of your month\n");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("31");
		break ; 
		case 2 :
		printf("28");
		break ; 
		case 4 :
		case 6:
		case 9 :
		case 11 :
		printf("30");
		break ; 
		default :
		printf("error");
		break ; 
	}
	return 0 ; 
}

				

		
		

		
		
		
		
		