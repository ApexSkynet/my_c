#include <stdio.h>

int max_find(int max)
{
	int n;
	scanf("%d",&n);
	if(n == 0)
		return max;
	if(n > max || (max == 0))
		max = n;
	return max_find(max);
}

int main(void)
{
	
	printf("%d\n",max_find(0));
	return 0;
}

