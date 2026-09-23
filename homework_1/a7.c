
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a>b ? printf("%d %d",b,a) : printf("%d %d",a,b);
	
    return 0;
}

