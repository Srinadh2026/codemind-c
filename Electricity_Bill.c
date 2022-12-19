#include<stdio.h>
int main()
{
    float a,b,c,d,e,t,s,k;
    int u;
    scanf("%d",&u);
    if(u<199)
    {
        a=1.20;
        t=u*1.20;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",a);
        printf("Bill: %.2f
",t);
    }
    else if(u>=200 && u<400)
    {
        b=1.40;
        t=u*1.40;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",b);
        printf("Bill: %.2f
",t);
    }
    else if(u>=400 && u<600)
    {
        c=1.60;
        t=u*1.60;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",c);
        printf("Bill: %.2f
",t);
    }
    else if(u>=600 && u<800)
    {
        d=1.80;
        t=u*1.80;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",d);
        printf("Bill: %.2f
",t);
    }
    else if(u>=800)
    {
        e=2.00;
        t=u*2.00;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",e);
        printf("Bill: %.2f
",t);
    }
    if(t>=400)
    {
        s=t*0.15;
        printf("Surcharge: %.2f
",s);
    }
     else
     {
         printf("Surcharge: 0.00
");
     }
     k=t+s;
     printf("Total Amount: %.2f",k);
    }
    