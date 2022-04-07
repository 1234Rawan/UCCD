#include<stdio.h>
void main()
{
	int x,y,sum=0;
	float avr;
	printf("Enter the number of x");
	
	for(y=1;y<=10;y++)
	{
	
	printf("number- %d\n",x);	
	scanf(" %d", &x);
		sum+=x;
	}
	avr=sum/10.0;
	printf("sum of 10 num %d",sum);
	avr=sum/10.0;
	printf(" THE AVR = %f",avr);
}