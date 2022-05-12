#include<stdio.h>
void main(){
int T=5;
printf("T befor change is :%d\n",T);
int *ptr=&T;
*ptr=6;
printf("T after change is :%d\n",T);
}