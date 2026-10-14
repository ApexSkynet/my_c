#include <stdio.h>

int natural(int a)
{
	if(a<=1)
		return 1;
	return a+natural(a-1);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",natural(n));
	return 0;
}
