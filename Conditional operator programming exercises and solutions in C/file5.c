/*5. Write a C program to check whether character is an alphabet or not using conditional operator.
*/
#include<stdio.h>
int main(void)
{
	char letter ; 
	printf("please enter your character\n");
	scanf(" %c",&letter);
	((letter>='a')&&(letter<='z'))||((letter>='A')&&(letter<='Z')) ? printf("%c is alphabet",letter):printf("%c is not alphabet",letter);
    return 0 ;
}