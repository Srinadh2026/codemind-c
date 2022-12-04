#include<stdio.h>
int main()
{
    int n,i,b=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        b=b+i;
    }
    if(b==n)
    {
        printf("PERFECT");
    }
    else if(b>n)
    {
        printf("ABUNDANT");
    }
    else if(b<n)
    {
        printf("DEFICIENT");
    }
}