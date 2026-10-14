#include <stdio.h>

int is_prime(int n,int delitel)
{
	if(n==delitel)
		return 1;
	if((n>1) && n%delitel != 0)
		return is_prime(n,delitel+1);
	else
		return 0;	
}

int main(void)
{
	int num;
	scanf("%d",&num);
	is_prime(num,2) == 1 ? printf("YES") : printf("NO");
	return 0;
}
