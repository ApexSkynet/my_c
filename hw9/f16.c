#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#define K 2

void input(char c[], int n)
{
	scanf("%s",c);
}

void black_or_white(char c[], int n)
{
	if((c[0] == 'A' || c[0] == 'C' || c[0] == 'E' ||c[0] == 'G') && (c[1] == '1' || c[1] == '3' || c[1] == '5' || c[1] == '7'))
		printf("BLACK");
	else if((c[0] == 'B' || c[0] == 'D' || c[0] == 'F' ||c[0] == 'H') && (c[1] == '2' || c[1] == '4' || c[1] == '6' || c[1] == '8'))
		printf("BLACK");
	else
		printf("WHITE");
}

void print(char c[], int n)
{
	//for(int i = 0; i< n; i++)
		printf("%s", c);
}

int main(int argc, char **argv)
{
	char c[K];
	input(c,K);
	//print(c,K);
	black_or_white(c,K);
	return 0;
}
