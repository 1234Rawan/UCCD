#include <stdio.h>
int main()
{
int G,B,C;
int *X,*Q,*Z;
G=4;
B=5;
C=6;
X=&G;
Q=&B;
Z=&C;
printf("G=%d\n",G);
printf("B=%d\n",B);
printf("C=%d\n",C);
printf("X=%d\n",X);
printf("Q=%d\n",Q);
printf("Z=%d\n",Z);
printf("*X=%d\n",*X);
printf("*Y=%d\n",*Q);
printf("*Z=%d\n",*Z);
printf("swapping pointers\n");
Z=X, X=Q ,Q=Z;
printf("G=%d\n",G);
printf("B=%d\n",B);
printf("C=%d\n",C);
printf("X=%d\n",X);
printf("Q=%d\n",Q);
printf("Z=%d\n",Z);
printf("*X=%d\n",*X);
printf("*Q=%d\n",*Q);
printf("*Z=%d\n",*Z);




}