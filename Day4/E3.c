#include<stdio.h>
void Max();
void min();
void main()
{
	int x,y,z,c;
	Max();
  min();
}
void Max()
{
	int x,y,z,c;
	
	printf("Enter the number");
	scanf(" %d", &x);
	scanf(" %d", &y);
	scanf(" %d", &z);
	scanf(" %d", &c);

	if(x>y&&x>z&&x>c)
	{
		printf("The max is %d",x);
	}
	else if (y>x&&y>z&&y>c)
	{
		printf("The max is %d",y);
		
	}else if (z>x&&z>y&&z>c)
	{
		printf("The max is %d",z);
		
	}
	else if (c>x&&c>z&&c>y)
	{
		printf("The max is %d",c);
		
	}
}

void min()
{
		int x,y,z,c;
	if(x<y&&x<z&&x<c)
	{
		printf("The min is %d",x);
	}
	else if (y<x&&y<z&&y<c)
	{
		printf("The min is %d",y);
		
	}else if (z<x&&z<y&&z<c)
	{
		printf("The min is %d",z);
		
	}
	else if (c<x&&c<z&&c<y)
	{
		printf("The min is %d",c);
		
	}
}