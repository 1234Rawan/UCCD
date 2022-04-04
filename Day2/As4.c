#include<stdio.h>
void main()
{
	int ID;
	int password;
	printf("Enter the number");
		scanf(" %d",&ID);
	if(ID==1023499)
	{
		printf("ID is correct ");
		printf("Enter the number");
			scanf(" %d",&password);
		if(password==12344321)
		{
			printf("password is correct \n");
			printf("ID=%d \n",ID);
		printf("password=%d \n",password);	
		}
else if(password!=12344321) 
	{
	printf("passwordis incorrect \n");			
		}
	}
	else
	{
	printf("ID is incorrect");	
	}
}