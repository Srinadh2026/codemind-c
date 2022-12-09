#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    t=2*a*b*c*512/1024;
    printf("%dKB",t);
    
}