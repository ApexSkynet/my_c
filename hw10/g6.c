#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 1000


int main(void)
{
	FILE *f, *out;
	
	f=fopen("input.txt","r");
	char str[SIZE];
	fscanf(f,"%[^\n]",str);
	fclose(f);
	int len = strcspn(str,"\r\n");
	str[len] = '\0';
	int is_palindrom = 1;
	for(int i = 0; i < (len)/2;i++)
	{
		if(str[i] != str[len-1-i])
		{
			is_palindrom = 0;
			break;
		}
	}
	out = fopen("output.txt","w");
	is_palindrom == 1 ? fprintf(out,"YES"):fprintf(out,"NO");
		
	
	fclose(out);
	
	return 0;
}
