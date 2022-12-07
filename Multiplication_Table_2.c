#include<stdio.h>
int main()
{
    int i,n,m,k;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        k=n*i;
        printf("%d x %d = %d
",n,i,k);
    }
}