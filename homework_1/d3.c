#include <stdio.h>

void invNumber(void)
{
	char ch;
	scanf("%c",&ch);
	if(ch!='\n')
	{
		invNumber();
		printf("%c\n",ch);
	}
	
	}

int main(void)
{
	invNumber();
	return 0;
}

