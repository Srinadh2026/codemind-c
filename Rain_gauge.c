#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
{
    int n;
    scanf("%d",&n);
    if(n<3)
    printf("LIGHT
");
    else if(n>=3 && n<7)
    printf("MODERATE
");
    else
    printf("HEAVY
");
}
}