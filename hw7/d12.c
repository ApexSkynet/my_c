#include <stdio.h>

void k_memb(int n)
{
	if (n != 1)
	{
		k_memb(n-1);
	}
	printf("%d ", n);
}

int main(void)
{
	int num;
	scanf("%d",&num);
	k_memb(num);
	return 0;
}
