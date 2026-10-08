
#include <stdio.h>

int middle(int a, int b);

int main()
{
	int n,p;
	scanf("%d%d",&n,&p);
	printf("%d\n",middle(n,p));
	return 0;
}

int middle(int a, int b)
{
	int mid;
	mid = (a+b)/2;
	 return mid;
}
