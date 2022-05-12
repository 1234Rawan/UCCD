#include<stdio.h>
int sum(int *U,int *Y);
void main()
{int U;
int Y;
printf("please Enter value 1:");
scanf("%d",&U);
printf("please Enter value 2:");
scanf("%d",&Y);
int result=sum(&U,&Y);
	printf("the result is :%d",result);
}
int sum(int *U,int *Y)
{
	return *U+*Y;
}