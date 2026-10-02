
#include <stdio.h>

void sum(void);

int main()
{
	sum();
	return 0;
}

void sum(void)
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i = 1; i<=n; i++)
	{
		sum += i;
	}
	printf("%d\n",sum);
}
