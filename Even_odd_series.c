#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=-1,k2=1,s,a,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(k1==-1)
            {
                printf("0 ");
                k1++;
            }
            else
            {
            s=pow(3,k1);
            printf("%d ",s);
            k1++;
            }
        }
        else
        {
            a=pow(2,k2);
            printf("%d ",a);
            k2++;
        }
    }
}