
#include <stdio.h>

int calc(int a);

int main()
{
	int d,r1,max=0;
	do 
	{
		scanf("%d",&d);
		r1 = calc(d);
			if(r1>max)
			{
				max = r1;
			}
	}while (d != 0);
	printf("%d\n",max);
	return 0;
}

int calc(int a)
{
	int f;
	if (a >= -2 && a < 2)
	{
		f = a*a;
	}
	else if (a >= 2)
	{
		f = a*a + 4*a + 5;
	}
	else
	{
		f = 4;
	}
	return f;
}
