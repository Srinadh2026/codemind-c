#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int rc;
    rc=c*b;
    if(c<d)
    printf("%d",rc+c*(a-b));
    else
    printf("%d",rc+d*(a-b));
}