#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char ch;
    for(i='A';i<'A'+n;i++)
    {
        for(j='A';j<'A'+n;j++)
        {
        printf("%c ",i);
        }
        printf("
");
    }
    
}