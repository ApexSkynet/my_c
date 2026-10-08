
#include <stdio.h>
#include <inttypes.h>

void convert(void);

int main()
{
	convert();
	return 0;
}

void convert(void)
{
	int n,p,full,number=0, res,count=1;
	scanf("%d%d",&n,&p);
	do{
		full = n / p;
		res = n%p;
		n = full;
		res *= count;
		number += res;
		count *= 10;
				
	}while(full != 0);
	printf("%d\n",number);
	
}
