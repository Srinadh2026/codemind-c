#include<stdio.h>
int main()
{
    int n,i,m,sum=0,sub=0,k,mul;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sub=sub+i;
        m=i*i;
        sum=sum+m;
        mul=sub*sub;
        k=mul-sum;
    }
    
    printf("%d",k);
}