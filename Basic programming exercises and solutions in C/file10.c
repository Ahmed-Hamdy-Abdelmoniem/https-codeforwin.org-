/*10. Write a C program to convert days into years, weeks and days.
*/
#include<stdio.h>
int main(void)
{
	int days,years=0,weeks = 0; 
	printf("Enter days: \n");
	scanf("%d",&days);
	while(days>=365)
	{
		days = days - 365 ;
		years++;
	}
	while(days>=7)
	{
		days = days - 7 ;
		weeks++;
	}
	printf("days is %d\n", days);
    printf("weeks is %d\n", weeks);
	printf("years is %d\n", years);
	return 0 ; 
}

	

	
	
		
	
