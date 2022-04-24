#include<stdio.h>
int Get_Max (int a,int b);
void main()
{
	int c,v;
	printf("Enter the numder");
	scanf(" %d", &v);
	printf("Enter the numder");
	scanf(" %d", &c);
	Get_Max ( c, v);
	printf(" the maximum is value %d",Get_Max(c,v));
}
int Get_Max (int a,int b)
{ 
int res;
if(a>b)
{
	res=a;
}
	else if(b>a)
	{
		res= b;
	}
	return res;
}