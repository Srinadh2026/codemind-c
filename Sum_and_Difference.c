#include<stdio.h>
int main()
{
    int a,b,s,di;
	float x,y,m,e;
	scanf("%d%d",&a,&b);
	scanf("%f%f",&x,&y);
	s=a+b;
	di=a-b;
	m=x+y;
	e=x-y;
	printf("%d %d
",s,di);
	printf("%0.1f %0.1f",m,e);
	}