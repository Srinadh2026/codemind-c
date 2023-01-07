#include<stdio.h>
int main()
{
    int f,i;
    scanf("%d",&f);
    for(i=1;i<=f;i++)
{
    int x,n,t;
    scanf("%d%d",&x,&n);
    t=x/10;
   
    
    if(n<=10)
    {
        printf("%d
",n*t);
    }
}
}