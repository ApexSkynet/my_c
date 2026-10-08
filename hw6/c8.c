
#include <stdio.h>
#include <inttypes.h>

void smallToBig(void);

int main()
{
	smallToBig();
	return 0;
}

void smallToBig(void)
{
	for(char c=getchar(); c != '.'; c=getchar())
		{
		if(c >= 'a' && c <= 'z')
		{
			putchar(c-0x20);
		}
		else
		{
			putchar(c);
		}
	}
}
