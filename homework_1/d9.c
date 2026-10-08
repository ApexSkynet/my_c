#include <stdio.h>

int sum_digits(int n)
{
	if(n > 0)
		return n%10 + sum_digits(n/10);
	else
		return 0;
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d\n",sum_digits(a));
	return 0;
}

