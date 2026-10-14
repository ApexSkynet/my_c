#include <stdio.h>

int is2pow(int n)
{
	
	if(n == 1)
		return 1;
	if(n%2 != 0)
	{
		return 0;
	}
	else
	{	
		is2pow(n/2);
	}
	
}

int main(void)
{
	int n;
	scanf("%d",&n);
	is2pow(n) == 1 ? printf("YES\n") : printf("NO\n");
	
	return 0;
}

