#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s,ar;
    s=(a+b+c)/2;
ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.2f",ar);
    
}