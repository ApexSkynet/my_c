#include <stdio.h>

void odd(void)
{
	int n;
	scanf("%d",&n);
	if(n != 0)
		{
			if(n%2 != 0)
			printf("%d ", n);
			odd();
		}
	
}

int main(void)
{
	
	odd();
	return 0;
}

