#include<stdio.h>
void fun(int*C,int*V);
void main()
{ int C;
  int V;
  printf("Enter Value 1:");
  scanf(" %d",&C);
  printf("Enter Value 2:");
  scanf(" %d",&V);
  fun(&C,&V);
}
void fun(int*C,int*V){
	int sum=*C+*V;
	int sub=*C-*V;
	printf("The result of summation is:%d\n",sum);
	printf("The result of subtraction is:%d\n",sub);
	
}