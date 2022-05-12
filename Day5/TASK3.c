#include<stdio.h>
void main()
{
	int x;
	int arr[10];

	for(x=0;x<10;x++)
	{
		printf("Enter the number %d:",x);
		scanf(" %d",&arr[x]);
	}
	
	for(x=0;x<10;x++)
	{
	for(int i=0;i<9;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int f=arr[i];
			arr[i]=arr[i+1];
		arr[i+1]=f;
		}
	}
		
	}
	for(x=0;x<10;x++)
	{
	
		printf(" %d",arr[x]);
	}
	
}