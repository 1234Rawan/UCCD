#include<stdio.h>

int ADD(int a,int s);
int Sub(int g,int d);
int Mult(int c, int f);
int DIVIDE(int n,int m);
int reminder(int y,int t);
int OR(int z,int q);
int AND(int e,int D);
int dec(int b);
int incr(int L);
int Not(int R,int W);
int xor(int S);
void main()
{
	int A=ADD(2,3);
int s=Sub(4,2);
int m=Mult(1,2);
int d=DIVIDE(6,2);
int r=reminder(5,2);
int o= OR(5,6);
int a= AND(9,8);
int D=dec(9);
int I=incr(7);
int B=Not(8,5);
int X=xor(4);
printf("ADD%d \n",A);
printf("SUB %d \n",s);
printf("MULT %d \n",m);
printf("DIVIDE %d \n",d);
printf("reminder %d \n",r);
printf("OR %d \n",o);
printf("AND %d \n",a);
printf("dec %d \n",D);
printf("incr %d \n",I);
printf("Not %d \n",B);
printf("Xor %d \n",X);
}

int ADD(int a,int s)
{
return a+s;
}
int Sub(int g,int d){
return g-d;
}
int Mult(int c, int f)
{
return c*f;
}
int DIVIDE(int n,int m)
{
return n/m;
}
int reminder(int y,int t)
{
return y%t;
}
int OR(int z,int q)
{
	return z|q;
}
int AND(int e,int D)
{
	return e&D;
}
int incr(int L)
{
	return L++;
}
int dec(int b)
{
	return b--;
}
int Not(int R,int W)
{
	return R=!W;
}
int xor(int S)
{
	return S^3;
}

