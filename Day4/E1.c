#include<stdio.h>
void SWAP();
void main()
{
	SWAP();
}
void SWAP()
{
	int x,z;
	printf("Enter the number of x");
	scanf(" %d",&x);
	printf("x before SWAP %d \n",x);
	printf("Enter the number of z");
	scanf(" %d",&z);
	printf("Before SWAPING %d \n",z);
	int d=x+z;
	x=d-x;
	z=d-z;
	printf("AFTER SWAPING x=%d \n",x);
	printf("AFTER SWAPING z= %d \n",z);
}
