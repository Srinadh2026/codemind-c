#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d;
    scanf("%lld",&n);
    d=log10(n)+1;
    if(d==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}