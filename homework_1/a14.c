
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a,max = 0;
	scanf("%d",&a);
	max = a/100 > (a%100)/10 ?  a/100 : (a%100)/10;
	max = max > (a%100)%10 ? max : (a%100)%10;
		
	printf("%d",max);
	
	
    return 0;
}

