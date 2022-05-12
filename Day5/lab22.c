#include<stdio.h>
void main()
{
		int arr[10];
		int sum=0;
		float avr;
		int x;
	for( x=0;x<10;x++)
	{
		printf("please enter the number %d:",x);
		scanf(" %d",&arr[x]);
	
	}
	for( x=9;x>=0;x--)
	{
		//printf(" %d\n",arr[x]);
		sum+=arr[x];
	}
	avr=(float)sum/10.0;
	printf("sum=%d \n",sum);
	printf("avr=%f \n",avr);
	
}