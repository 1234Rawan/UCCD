#include<stdio.h>
void main()
{
	int hours;
	float salary;
	printf("please enter the hours");
	scanf(" %d",&hours);
	printf("please enter the salary");
	scanf(" %f",&salary);
	salary*=hours;
	if(hours<40)
	{
		salary=salary*0.1;
	}
	else{
		printf("salary = %f",salary);
	}
}