
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	unsigned int a = 0xFFFFFF00;
	a |= 3;
	printf("%d",(1<<5)-1); 
    return 0;
}

