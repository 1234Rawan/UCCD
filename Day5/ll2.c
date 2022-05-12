#include<stdio.h>
void main()
{
	int arr[10];
	int search;
	int x;
	int c=0;
	for(int x=0;x<10;x++)
	{
		printf("please enter the number %d:",x);
		scanf(" %d",&arr[x]);
		
	}
		printf("Enter the number ");
		scanf(" %d",&search);
	for(int x=0;x<10;x++)
	{
		if(arr[x]==search)
		{
			c++;
		}
		
	
		
  }
  
		if(c>0)
		{
			printf("value exists %d times",c);
			
		}
		else
		 {
	  printf("NOT found");
		 }

}