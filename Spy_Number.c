#include<stdio.h>
int main()
{
    int n,i,s=0,m=1;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        s=s+i;
        m=m*i;
        n=n/10;
    }
    if(s==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}