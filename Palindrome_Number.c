#include<stdio.h>
int main()
{
    int out,i;
    scanf("%d",&out);
    for(i=1;i<=out;i++) 
    { 
        int n,m,o=0,ext=0; 
        scanf("%d",&n);
        ext=n; 
        while(n>0) 
        { 
            m=n%10;
            o=o*10+m;
            n=n/10;
            }
            if(o==ext)
            {
                printf("True
");
                } 
                else
                {
                    printf("False
");
                    } 
        
    }
    
}