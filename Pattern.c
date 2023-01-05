#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<1+n;i++)
    {
        for(j=1;j<1+n;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}