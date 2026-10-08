#include <stdio.h>

void natural(int a)
{
	if(a>1)
		natural(a-1);
	printf("%d ", a);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	natural(n);
	return 0;
}

