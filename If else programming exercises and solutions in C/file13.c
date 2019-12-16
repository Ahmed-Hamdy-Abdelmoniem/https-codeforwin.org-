/*C program to count total number of notes in given amount*/
#include<stdio.h>
int main(void)
{
	int num ,sub = 0 , j = 1  ; 
	 printf("please enter your number");
	 scanf("%d",&num);
	 j = num / 500 ; 
	 
	 if(num-(j*500)>=0)
	 {
		 printf("500 = %d ",j);
		 num = num - (j *500);
	 }
	 j = num / 100 ; 
	 
	 if(num-(j*100)>=0)
	 {
		 printf("100 = %d ",j);
		 num = num - (j *100);
	 }
	 j = num / 50 ; 
	 
	 if(num-(j*50)>=0)
	 {
		 printf("50 = %d ",j);
		 num = num - (j *50);
	 }
	 j = num / 20 ; 
	 
	 if(num-(j*20)>=0)
	 {
		 printf("20 = %d ",j);
		 num = num - (j *20);
	 }
	 j = num / 10 ; 
	 
	 if(num-(j*10)>=0)
	 {
		 printf("10 = %d ",j);
		 num = num - (j *10);
	 }
	 j = num / 5; 
	 
	 if(num-(j*5)>=0)
	 {
		 printf("5 = %d ",j);
		 num = num - (j *5);
	 }
	 j = num / 2 ; 
	 
	 if(num-(j*2)>=0)
	 {
		 printf("2 = %d ",j);
		 num = num - (j *2);
	 }
	 j = num / 1 ; 
	 
	 if(num-(j*1)>=0)
	 {
		 printf("1 = %d ",j);
		 num = num - (j *1);
	 }
	 return 0 ; 
}
	
	 