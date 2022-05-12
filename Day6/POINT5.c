#include<stdio.h>
int sort(int arr[10]);
int o,j;
void main(){
	int R[10];
	int *p = R;
	for( o=0;o<10;o++){
		printf("please enter number %d: ",o+1);
		scanf(" %d",&R[o]);
	}
	sort(p);
}
int sort(int *R){
	int temp;
	 for(o=1;o<10;o++)
	{
        for(j=0;j<(10-o);j++)
		{
            if(R[j]>R[j+1])
            {
                temp=R[j];
                R[j]=R[j+1];
                R[j+1]=temp;
            }  
    	}
	}
    printf("Array after sorting: \n");

    for(o=0;o<10;o++){

        printf("%d\n",R[o]);
	}
	
}