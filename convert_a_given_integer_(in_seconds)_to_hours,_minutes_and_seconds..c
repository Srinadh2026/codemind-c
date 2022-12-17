#include<stdio.h>
int main()
{
    int g,h,m,s;
    scanf("%d",&g);
    h=g/3600;
    m=g%3600/60;
    s=(g-(h*3600)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s)
    ;}