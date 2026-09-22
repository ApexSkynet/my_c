
#include <stdio.h>
#include <locale.h>


int main()
{
	int a,b,c,sum;
	setlocale(LC_ALL,".utf-8");
	//printf("Введите три целый числа:\n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	printf("%d+%d+%d=%d",a,b,c,sum);
    return 0;
}

