#include<stdio.h>
int main()
{
    int n,i=0,j=1,c,k,count=0;
    scanf("%d",&n);
    for(c=3;c<=n;c++)
    {
        k=i+j;
        i=j;
        j=k;
        if(k==n)
        count=1;
    }
    if(count==1)
    printf("True");
    else
    printf("False");
}