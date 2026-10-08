
#include <stdio.h>


int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	int i = a;
	while(i<=b){
		sum += i*i;
		i++;
	}	
	printf("%d",sum);
    return 0;
}

