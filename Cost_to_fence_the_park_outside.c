#include<stdio.h>
int main()
{
    int l,b,w,c,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    t=c*((l+2*w)*(b+2*w)-(l*b));
    printf("%d",t);
}