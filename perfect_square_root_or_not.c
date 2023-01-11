#include<stdio.h>
#include<math.h>
int main()
{
    int n,aq,s,k;
    scanf("%d",&n);
    s=sqrt(n);
    k=s*s;
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}