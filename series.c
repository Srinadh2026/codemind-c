#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d=0,i,s;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        if(i%2==0)
        {
            b=pow(3,(c+1));
            printf("%d ",b-1);
            c++;
        }
        else
        {
            s=pow(2,(d+1));
            printf("%d ",s-1);
            d++;
        }
    }
}