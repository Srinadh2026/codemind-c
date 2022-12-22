#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r%2!=0 && n%2!=0)
        {
        printf("Odd");
        break;
        }
    else if(r%2==0 && n%2==0)
    {
        printf("Even");
        break;
    }
    else
    {
        printf("Mixed");
        break;
    }
}
}