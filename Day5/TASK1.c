#include<stdio.h>
void main()
{
	int arr[10];
	for(int x=0;x<10;x++)
	{
		printf("please enter the number %d:",x);
		scanf(" %d",&arr[x]);
	
	}
	for(int x=9;x>=0;x--)
	{
		printf(" %d\n",arr[x]);
		
	
	}
}