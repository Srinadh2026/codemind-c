#include<stdio.h>
float avg(int a,int b)
{
    float c;
    c=(a+b)*0.5;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float k=avg(a,b);
    printf("Average of %d and %d is: %.2f",a,b,k);
}