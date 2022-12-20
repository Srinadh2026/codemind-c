#include<stdio.h>
int main()
{
    int n,i,old,r,sum=0,k,b,sub=0;
    scanf("%d",&n);
    old=n;
    i=n*n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    k=sum*sum;
    while(k!=0)
    {
        b=k%10;
        sub=sub*10+b;
        k=k/10;
    }
    if(sub==i)
    printf("True");
    else
    printf("False");
}