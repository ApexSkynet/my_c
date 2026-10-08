


#include <stdio.h>



int main()
{
		
		for (char c = getchar();c!='.';c=getchar())
		{
			if (c>= 'a' && c <= 'z')
				putchar(c | 0b00000000);
			else 
				putchar(c);
		}
		
		
	return 0;
}

