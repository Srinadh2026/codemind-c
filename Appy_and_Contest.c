#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)

{
    int n,b,c,k,l,m;
    scanf("%d%d%d%d",&n,&b,&c,&k);
    l=n/b;
    m=n/c;
    if(l+m>=k)printf("Win
");
    else printf("Lose
");
}
}