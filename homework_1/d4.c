#include <stdio.h>

void print_num(int num)
{
	printf("%c\n",num);
	if(num!='\n')
	{
		print_num();
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	print_num(n);
	return 0;
}

