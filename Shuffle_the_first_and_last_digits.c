#include<stdio.h>
#include<math.h>
int main()
{
   long int n;
    scanf("%lld",&n);
    int d,r,p,f,m,mi,t;
    d=log10(n);
    while(n>0)
    {
        r=n%10;
        break;
    }
       p=pow(10,d);
       f=n/p;
       m=n%p;
       mi=m-r;
       t=r*p+mi+f;
       printf("%d",t);
}