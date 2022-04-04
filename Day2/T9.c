#include<stdio.h>
void main()
{
	int grade;
	printf("please enter the number");
	scanf(" %d", &grade);
	if(0<=grade&&grade<50)
	{
		printf("failed");
	}
	else if(50<=grade&&grade<65)
	{
		printf("Nomal");
	}
	else if(65<=grade&&grade<75)
	{
		printf("good");
	}
	else if(75<=grade&&grade<85)
	{
		printf("very good");
	}
	else if(85<=grade)
	{
		printf("Exellent");
	}	
}