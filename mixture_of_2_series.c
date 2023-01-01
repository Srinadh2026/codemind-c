#include<stdio.h>
int main()
{
    int n,i,a,c,k1=0,k2=-1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            c=k1*2;
            printf("%d ",c);
            k1++;
        }
        else
        {
            a=k2+1;
            printf("%d ",a);
            k2++;
        }
    }
}
