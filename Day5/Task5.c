#include <stdio.h>
int main()
{
   int o, first, last, middle, n, valuesearch;
   int arr[10];
  printf("Enter number of elements:\n");
   scanf(" %d",&n); 
   printf("Enter %d integers:\n", n);
   for (o= 0; o < n; o++)
      scanf("%d",&arr[o]); 
   printf("Enter the valuesearch:\n");
   scanf(" %d", &valuesearch);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < valuesearch)
         first = middle + 1;    
      else if (array[middle] == valuesearch) {
         printf("%d is present at index %d.\n", valuesearch, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", valuesearch);
   return 0;  
}