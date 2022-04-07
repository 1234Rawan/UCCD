#include<stdio.h>
void main()
{
	int x,y,sum=0;
	for(int c=0;;c++)
	{
	printf("Enter the first number");
	scanf(" %d", &x);
	printf("Enter the second number");
	scanf(" %d", &y);
	sum=x+y;
	printf("sum = %d\n",sum);
}
}