#include<stdio.h>
int main ()
{
	int a=6,b=5,c=4,d=2,e=1,x,y,z,r;
	x=a*b;
	printf("%d*%d=%d\n",a,b,x);
	y=c/d;
	printf("%d/%d=%d\n",c,d,y);
	z=x+y;
	printf("%d+%d=%d\n",x,y,z);
	r=z-e;
	printf("%d=%d",r,a*b+c/d-c);
}
