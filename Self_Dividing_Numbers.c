#include<stdio.h>
int main()
{
    int m,n,i,k,c,tc,r;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        k=i;
        c=0;
        tc=0;
        while(k!=0)
        {
            c=c+1;
            r=k%10;
            if(r!=0 && i%r==0)
            {
                tc=tc+1;
            }
            k=k/10;
        }
            if(c==tc)
            {
                printf("%d ",i);
            }
        }
    }
