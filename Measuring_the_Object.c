#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,w;
    scanf("%d%d%d%d",&x,&y,&z,&w);
    a=z+y;
    b=z+w;
    c=w+y;
    if(x==a||x==b||x==c||x==y||x==z||x==w)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}