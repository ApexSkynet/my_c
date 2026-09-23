
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a,b,c,d,e,min;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	min = a > b ? b : a;
	min = min > c ? c : min;
	min = min > d ? d : min;
	min = min > e ? e : min;
	
	printf("%d",min);
	
	
    return 0;
}

