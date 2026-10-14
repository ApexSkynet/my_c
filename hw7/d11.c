#include <stdio.h>

int num_ones(int n)
{
	if(n/2 == 0)
	{
		return n%2;
	
	}
	
	return n%2 + num_ones(n/2);
	
	//printf("%d\n",num_ones(n%2));
}

int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d\n",num_ones(num));
	return 0;
}
