/*C program to enter student marks and find percentage and grade*/
#include <stdio.h>
int main (void)
{
	int g1 , g2 , g3 ,g4 ,g5 ; 
	float c ;
	printf("please enter your grades\n");
	scanf("%d %d %d %d %d",&g1 ,&g2 ,&g3 ,&g4 ,&g5 );
	c = ((g1 +g2 +g3 +g4 +g5)*100)/500;
	printf("prec %f\n",c);
	if(c >=90 && c <100)
	{
		printf("A");
	}
	else if(c >=80 && c <90)
	{
		printf("B");
	}
	
	else if(c >=70 && c <80)
	{
		printf("C");
	}
	else if(c >=60 && c <70)
	{
		printf("D");
	}
	
	else if(c >=40 && c <60)
	{
		printf("E");
	}
	else if(c<40)
	{
		printf("F");
	}
	return 0 ; 
}
		
	
	
	