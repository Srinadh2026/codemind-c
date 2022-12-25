#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,a,s;
    scanf("%d%d%d",&x,&y,&z);
    a=pow(x,y);
    s=a%z;
    printf("%d",s);
}