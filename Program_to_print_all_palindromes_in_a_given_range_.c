#include<stdio.h>
int main()
{
    int m,n,i,r,s,temp;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
    temp=i;
    s=0;
    while(temp)
    {
        r=temp%10;
        temp=temp/10;
        s=s*10+r;
        
    }
    if(i==s)
    printf("%d ",s);
    }
}