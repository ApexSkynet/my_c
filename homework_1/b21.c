


#include <stdio.h>



int main()
{
		
		for (char c = getchar();c!='.';c=getchar())
		{
			if (c>= 'A' && c <= 'Z')
				putchar(c+0x20);
			else 
				putchar(c);
		}
		
		
	return 0;
}

