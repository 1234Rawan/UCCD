#include<stdio.h>
void main()
{
	int x,z;
	printf("Enter the answer of 3*4=");
scanf(" %d",&x);
while(x!=12)
{
	printf("Not correct please try again");
	scanf(" %d",&x);
	z++;
}
printf("Thank you");
}