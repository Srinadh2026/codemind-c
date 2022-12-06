#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        a=a*10+i;
        n=n/10;
    }
    printf("%d",a);
}