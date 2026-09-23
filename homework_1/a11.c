
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a,b,c,d,e,min,max;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	min = a > b ? b : a;
	min = min > c ? c : min;
	min = min > d ? d : min;
	min = min > e ? e : min;
	
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = max > d ? max : d;
	max = max > e ? max : e;
	
	printf("%d",min+max);
	
	
    return 0;
}

