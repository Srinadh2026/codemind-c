#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }

}