#include<stdio.h>
int cap(int t,int s,int b)
{
    int c;
    c=2*t*s*b*512/1024;
    return c;
}
int main()
{
    int t,s,b,k;
    scanf("%d%d%d",&t,&s,&b);
    k=cap(t,s,b);
    printf("%d KB",k);
}