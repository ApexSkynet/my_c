
#include <stdio.h>

int is_digit(char c);

int main()
{
	printf("%d\n",is_digit('1'));
	return 0;
}

int is_digit(char c)
{
	int count = 0;
	for (char s = getchar(); s != '.'; s = getchar())
	{
		if(s >= '0' && s <= '9')
			count += s;
	}
	return count;
}
