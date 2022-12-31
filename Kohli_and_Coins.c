#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n%10==5 || n%10==0)
    {
        if(n%10==0)
        printf("%d",n/10);
        else if(n%10==5)
        printf("%d",n/10+1);
    }
    else
    {
        printf("-1");
    }
}