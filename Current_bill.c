#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float t,a;
    if(n<=199)
    { 
        t=n*1.20;
        } 
        else if(n>=200 && n<400)
        {
            t=n*1.50; 
            
        } 
        else if(n>=400 && n<600)
        { 
            t=n*1.80;
            }
            else if(n>=600) 
            {
                t=n*2.00;
                }
                if(t>400) 
                {
                    a=t+t*0.15;
printf("%.2f",a); 
                    
                } 
                else
                {
                    a=t+100; 
                    printf("%.2f",a);
                    } 
    
}