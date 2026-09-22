
#include <stdio.h>
#include <locale.h>


int main()
{
	int a,b,c,sum,product;
	setlocale(LC_ALL,".utf-8");
	//printf("Введите три целый числа:\n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	product = a*b*c;
	printf("%d+%d+%d=%d\n",a,b,c,sum);
	printf("%d*%d*%d=%d",a,b,c,product);
    return 0;
}

