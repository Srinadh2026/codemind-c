#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,j,mul=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            mul=mul*j;
        }
       printf("%d
",mul);
    }
     
}