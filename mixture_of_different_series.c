#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s,a,k1=0,k2=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            s=pow(2,k1)-1;
            printf("%d ",s);
            k1++;
        }
        else
        {
            a=pow(3,k2)-1;
            printf("%d ",a);
            k2++;
        }
    }
}