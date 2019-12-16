/*16. Write a C program to enter marks of five subjects and calculate total, average and percentage.
*/
#include<stdio.h>
int main(void)
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter marks of five subjects: ");
	scanf("%d %d %d %d %d",&sub1, &sub2, &sub3, &sub4, &sub5);
	printf("totoal : %d\n",(sub1+sub2+sub3+sub4+sub5));
	printf("Average = %d\n",(sub1+sub2+sub3+sub4+sub5)/5);
	printf("totoal : %d\n",((sub1+sub2+sub3+sub4+sub5)*100)/500);
	return 0 ; 
}

	