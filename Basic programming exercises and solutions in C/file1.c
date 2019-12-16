/*1. Write a C program to perform input/output of all basic data types*/
#include<stdio.h>
int main(void)
{
	signed char a1;
    unsigned char a2;
    signed short a3; 
    unsigned short a4; 
    signed int a5;
    unsigned int a6 ; 
    signed long a7 ; 
    unsigned long a8 ; 
	signed long long a9 ; 
    unsigned long long a10 ; 
    float a11 ; 
    double a12;
    long double a13;
	printf("please enter the unsigned char\n");
	scanf(" %c",&a1);

	printf("please enter the signed char\n");
	scanf(" %c",&a2);

	printf("please enter the signed shor\n");
	scanf("%hi",&a3);

	printf("please enter the unsigned short\n");
	scanf("%hu",&a4);

	printf("please enter the signed int\n");
	scanf("%d",&a5);

	printf("please enter the unsigned int\n");
	scanf("%lu",&a6);

	printf("please enter the signed long\n");
	scanf("%ld",&a7);

	printf("please enter the unsigned long\n");
	scanf("%lu",&a8);

	printf("please enter the signed long long\n");
	scanf("%lld",&a9);

	
	printf("please enter the unsigned long long\n");
	scanf("%llu",&a10);

	printf("please enter the signed float\n");
	scanf("%f",&a11);

	printf("please enter the signed double\n");
	scanf("%lf",&a12);

	printf("please enter the signed long double\n");
	scanf("%Lf",&a13);
/*****************************************************************/
	printf("the unsigned char is %c\n",a1);
	printf("the signed char is %c\n",a2);
	printf("the signed short is %hi\n",a3);
	printf("the unsigned short is %hu\n",a4);
	printf("the signed int is %d\n",a5);
	printf("the unsigned int is %lu\n",a6);
	printf("the signed long is %ld\n",a7);
	printf("the unsigned long is %lu\n",a8);
	printf("the signed long long is %lld\n",a9);
	printf("the unsigned long long is %llu\n",a10);
	printf("the signed float is %f\n",a11);
	printf("the signed double is %lf\n",a12);
	printf("the signed long double is %Lf\n",a13);
	return 0 ; 
}