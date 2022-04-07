#include<stdio.h>
void main()
{
int x,fac=1,z=0;
printf("Enter the number");
scanf(" %d", &x);
for(x=1;x<=7;x++)
{
	fac*=x;
}
printf("%d",fac);
}