#include<stdio.h>
int main()
{
    int n,i,sum=0,old;
    scanf("%d",&n);
    old=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==old)
    printf("True");
    else
    printf("False");
}