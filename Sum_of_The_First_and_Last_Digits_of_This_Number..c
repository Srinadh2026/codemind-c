#include<stdio.h>
int main()
{
	int tt;
	scanf("%d",&tt);
	long long int n;
	int fd,ld,sum=0;
	while(tt--)
	{
		scanf("%lld",&n);
		ld=n%10;
		while(n>=10)
		{
			n=n/10;
		}
		fd=n;
		sum=fd+ld;
		printf("%d
",sum);
	}
}