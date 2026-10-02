
#include <stdio.h>

int is_digit_to_num(char c);

int main()
{
	printf("%d\n",is_digit_to_num('1'));
	return 0;
}

int is_digit_to_num(char c)
{
	int sum = 0;
	for (char s = getchar(); s != '.'; s = getchar())
	{
		if(s >= '0' && s <= '9')
			sum += s-'0';
	}
	return sum;
}
