#include<stdio.h>
int main ()
{
    int n,r,k,d=10,flag=0;
    long int s;
    scanf("%d",&n);
    k=n;
    s=n*n;
    while(k>0)
    {
        r=s%d;
        if(n==r)
        {
            flag=1;
            break;
        }
        k=k/10;
        d=d*10;
    }
    if(flag==1)
    {
    printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
}
}