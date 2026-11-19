#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define N 1000

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	out = fopen("output.txt","w");
	char tempC[N]="";
	char newC[N]="";
	char endFile[] = ".html";
	fscanf(f,"%s",tempC);
	int count = strlen(tempC);
	for(int i = strlen(tempC); tempC[i] != '.'; i--)
	{
		if(tempC[i] == '/')
		{
			count = strlen(tempC);
			break;
		}
		count--;
	}
	if(count != strlen(tempC))
	{
		for(int i = 0; i < count; i++)
			newC[i] = tempC[i];
		strcat(newC, endFile);
		newC[strlen(newC)] = '\0';
		fprintf(out,"%s",newC);
	}
	else
	{
		strcat(tempC, endFile);
		tempC[strlen(tempC)] = '\0';
		fprintf(out,"%s",tempC);
	}
	fclose(f);
	fclose(out);
	return 0;
}
