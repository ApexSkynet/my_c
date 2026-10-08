
#include <stdio.h>

void brackets(void);

int main()
{
	brackets();
	return 0;
}

void brackets(void)
{
	int count=0;
	
	for (char s = getchar(); s != '.'; s = getchar())
	{
		if(s == '(' )
			count++;
		else
			count--;
		if(count < 0)
		{
			break;
		}
	}
	count == 0 ? printf("YES") : printf("NO");
}
