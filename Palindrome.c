#include<stdio.h>
int main()
{
    int n,i,r,sum=0,old;
    scanf("%d",&n);
    old=n;
    while(n!=0)
    {
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }
    if(sum==old)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}