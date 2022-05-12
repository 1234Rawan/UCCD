#include<stdio.h>
void main()
{
int arr[10];
int Max;
int Min;
for(int r=0;r<10;r++)
{
	printf("Enter the number %d:",r);
	scanf(" %d",&arr[r]);
}
for(int r=0;r<10;r++)
{
	printf(" %d\n",arr[r]);	
	
}
Max = Min =arr[0];
for(int r=0;r<10;r++)
{
if (Max<arr[r])
{
	Max=arr[r];
}


}
for(int r=0;r<10;r++)
{
if (Min>arr[r])
{
	Min=arr[r];
}

}
printf("max : %d \n",Max);
printf("min: %d \n",Min);
}