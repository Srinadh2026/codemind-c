#include<stdio.h>
int main()
{
    int n,r,sum=0,mul=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        mul=mul*r;
        n=n/10;
    }
    printf("%d",mul-sum);
}