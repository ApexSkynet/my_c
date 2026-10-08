#include <stdio.h>

void print_rev(void)
{
	char ch;
	scanf("%c", &ch);
	if (ch!= '.')
	{
		print_rev();
		printf("%c",ch);
	}
}

int main(void)
{
	print_rev();
	return 0;
}

