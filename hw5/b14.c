


#include <stdio.h>



int main()
{
		int count = 0;
		for (char c = getchar();c!='0';c=getchar())
		{
			while (c != ' ')
			{
				c = getchar();
				
			}
			count++;
		}
		printf("%d",count);
		
	return 0;
}

