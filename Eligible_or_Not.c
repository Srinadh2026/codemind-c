#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(z>=x && z<y)
        printf("YES
");
    else
    printf("NO
");
}
}