#include<stdio.h>
int main()
{
    int n,i,old,a=0;
    scanf("%d",&n);
    old=n;
    while(n>0)
    {
        i=n%10;
        a=a*10+i;
        n=n/10;
    }
    if(a==old)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}