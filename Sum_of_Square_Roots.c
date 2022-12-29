#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    float sum=0,k;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        k=sqrt(i);
        sum=sum+k;
    }
    printf("%.2f",sum);
}