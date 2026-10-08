
#include <stdio.h>

int is_happy_number(int n);

int main()
{
	int number;
	scanf("%d",&number);
	is_happy_number(number);
	return 0;
}

int is_happy_number(int n)
{
	int f1,sum = 0, product = 1;
	while (n != 0)
		{
			f1 = n % 10;
			sum += f1;
			product *= f1;
			n /=10;
		}
	sum == product ? printf("YES") : printf("NO");
	return sum;
}
