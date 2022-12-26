#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int v=n;
    while(n!=0)
    {
        r=n%10;
        int i,res=1;
        for(i=r;i>=1;i--)
        {
            res=res*i;
        }
        s=s+res;
        n=n/10;
    }
    if(v==s) printf("The number %d is a strong number
",v);
    else printf("The number %d is not a strong number",v);
}