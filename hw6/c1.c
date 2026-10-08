
#include <stdio.h>

void modulus(void);

int main()
{
	modulus();
	return 0;
}

void modulus(void)
{
	int a;
	scanf("%d",&a);
	a>0 ? printf("%d\n",a) : printf("%d\n",-a); 
	}
