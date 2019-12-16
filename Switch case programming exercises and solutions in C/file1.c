/*C program to print day of week name using switch case*/
#include<stdio.h>
int main(void)
{
	int day ; 
	printf("please enter your num\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1 :
		printf("sunday");
		break ; 
		case 2 :
		printf("monday");
		break ; 
		case 3 :
		printf("tuesday");
		break ; 
		case 4 :
		printf("wensday");
		break ; 
		case 5 :
		printf("thursday");
		break ; 
		case 6 :
		printf("friday");
		break ; 
		case 7 :
		printf("saterday");
		break ; 
		default:
		printf("error");
		break ;
	}
return 0 ; 
}
	
				

		
		
		 