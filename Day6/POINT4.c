#include<stdio.h>
void main(){
	int D[10];
	int *ptr =D;
	int s=0;
	printf("          ARRAY NUMBERS\n");
	for(int o=0;o<10;o++){
		printf("please enter number %d: ",o+1);
		scanf(" %d",&D[o]);
	}
	for(int o=0;o<10;o++){
		s+= *ptr;
		ptr++;
	}
	printf("summation of array is %d",s);
	
}