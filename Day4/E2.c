#include<stdio.h>
void fact();
void main()
{
	fact();

}
void fact()
{
	int x,f=1,z;
	printf("Enter the number of z");
	scanf(" %d", &z);
	for(x=1;x<=z;x++)
	{
		f*=x;
		
	}
	printf("fact=%d",f);
}