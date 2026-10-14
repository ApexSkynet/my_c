#include <stdio.h>

int primeMult(int n,int k)
{
	if (n >= k)
	{
		if (n%k == 0)
		{
			printf("%d ", k);
			n/=k;
			primeMult(n,k);
		}
		else
		{
			primeMult(n,k+1);
		}
	}
}

int main(void)
{
	int num;
	scanf("%d",&num);
	primeMult(num,2);
	return 0;
}
