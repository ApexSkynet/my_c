#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>
#define N 1000

void convertRepeatLetters(char s[], int n)
{
	int countLet = 1;
	int len = strlen(s);
	for(int i = 0; i< (len-1); i++)
	{
		while(s[i] == s[i+1])
		{
			countLet++;
			i++;
		}
		printf("%c%d",s[i],countLet);
		countLet=1;
	}
	
	
}

void input(char s[], int n)
{
	scanf("%s",s);
}

int main(void)
{
	char s[N];
	input(s,N);
	convertRepeatLetters(s, N);
	return 0;
}
