
#include <stdio.h>
#include <locale.h>


int main()
{
	int a,sum=0;
	scanf("%d",&a);
	sum += a/100;
	sum += (a%100)/10;
	sum += (a%100)%10;
	
	printf("%d\n",sum); 
    return 0;
}

