#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m)
    printf("LOSS
");
    else if(n==m)
    printf("NEUTRAL
");
    else if(n<m)
    printf("PROFIT
");
}
}