#include <stdio.h>

void n_to_one(int n)
{
	printf("%d ",n);
	if(n > 1)
	{
		n_to_one(n-1);
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	n_to_one(n);
	return 0;
}

