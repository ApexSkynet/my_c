
#include <stdio.h>
#include <inttypes.h>

void corns(void);

int main()
{
	corns();
	return 0;
}

void corns(void)
{
	uint64_t sum=1;
	int n;
	scanf("%d",&n);
	for(int i = 2; i<=n; i++)
	{
		sum *= 2;
	}
	printf("%llu\n",sum);
}
