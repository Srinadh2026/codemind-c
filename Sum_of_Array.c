#include<stdio.h>
int main()
{
    int n,i,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p+a[i];
    }
    printf("%d",p);
}