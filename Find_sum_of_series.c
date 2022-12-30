#include<stdio.h>
int main()
{
    int n,i;
    float a,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1.0/i;
        s=s+a;
        
    }
    printf("%.2f",s);
}