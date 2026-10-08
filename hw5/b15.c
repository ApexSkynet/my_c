


#include <stdio.h>



int main()
{
		int number = 0,count=0;
		for (char c = getchar();c!='0';c=getchar())
		{
			while (c != ' ')
			{
				c = getchar();
				number = number*10 + c - '0';
				printf("%d\n",number);
			}
			if(number%2 == 0)
				count++;
			
		}
		printf("%d",count);
		
	return 0;
}

