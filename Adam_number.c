#include<stdio.h>
int main()
{
   int n,i,r,sum=0,k,t,sub=0;
   scanf("%d",&n);
   i=n*n;
   while(n>0)
   {
        r=n%10;
        sum=sum*10+r;
       n=n/10;
   }
      k=sum*sum;
      while(k>0)
   {
      t=k%10;
      sub=sub*10+t;
      k=k/10;
   }
     if(sub==i)
     printf("True");
     else
     printf("False");
}