#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	char s1[100], s2[100], repLet[100];
	int count,k = 0;
	fscanf(f, "%s %s",s1,s2);
	fclose(f);
	out = fopen("output.txt","w");
	for(int i = 0; i < strlen(s1); i++)
	{
		for(int j = 0; j < strlen(s2);j++)
		{
			if(s1[i] == s2[j])
				count++;
		}
		if(count == 1)
			repLet[k++] = s1[i];
		count = 0;
		
	}
	for(int i = 0; i < strlen(repLet);i++)
	{
		for(int j = 0; j < strlen(repLet);j++)
		{
			if(repLet[i] == repLet[j] && i != j)
				count++;
		}
		if(count == 0)
			fprintf(out,"%c ",repLet[i]);
		count = 0;
	}
	fclose(out);
	
	return 0;
}
