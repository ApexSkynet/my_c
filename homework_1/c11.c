
#include <stdio.h>
#include <inttypes.h>

void NOD(int a,int b);

int main()
{
	int number1,number2;
	scanf("%d%d",&number1,&number2);
	NOD(number1,number2);
	return 0;
}

void NOD(int a,int b)
{
	int r=1;
	if (a < b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	else
	{
	}
	while (r != 0){
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d \n",a);
}
