
#include <stdio.h>
#include <locale.h>


int main()
{
	int a,product=1;
	scanf("%d",&a);
	product *= a/100;
	product *= (a%100)/10;
	product *= (a%100)%10;
	
	printf("%d\n",product); 
    return 0;
}

