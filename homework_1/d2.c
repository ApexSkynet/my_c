#include <stdio.h>

int sum(int a)
{
	if(a<=1)
		return 1;
	return a+sum(a-1);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",sum(n));
	return 0;
}

