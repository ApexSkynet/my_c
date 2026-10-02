
#include <stdio.h>

int is_prime(int n);

int main()
{
	int number;
	scanf("%d",&number);
	is_prime(number);
	return 0;
}

int is_prime(int n)
{
	int count = 0;
	if(n==1)
	{
		printf("NO");
	}
	else
	{
		for(int i = 1; i <= n; i++)
		{
			if (n%i == 0)
				count ++;
		}
		count > 2 ? printf("NO") : printf ("YES");
	}
	return count;
}
