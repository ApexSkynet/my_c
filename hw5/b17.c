
#include <stdio.h>

int main()
{
	int n1;
	scanf("%d", &n1);
	for (int i = 10; i <= n1; i++){
		int number = i;
		int f1, sum=0,product=1;
		while (number != 0)
		{
			f1 = number % 10;
			sum += f1;
			product *= f1;
			number /=10;
		}
		if (sum == product)
			printf("%d ", i);
		else
			continue;
		
	}
	
	return 0;
}

