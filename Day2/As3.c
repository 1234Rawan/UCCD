#include<stdio.h>
void main()
{
	int x,y,z;
	printf("please enter the number");
scanf(" %d",&x);
printf("please enter the number");
scanf(" %d",&y);
printf("please enter the number");
scanf(" %d",&z);
if(x>y&&x>z)
{
	printf("Max value is x= %d \n",x);
}
else if(y>z&&y>x)
{
	printf("Max value is y= %d \n",y);
}
else if(z>y&&z>x)
{
	printf("Max value is z= %d \n",z);
}
}