#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	fseek(f,0,SEEK_END);
	int size = ftell(f);
	char str[size];
	fseek(f,0,SEEK_SET);
	fscanf(f,"%[^\n]",str);
	fclose(f);
	//str[size+1] = '\0';
	out = fopen("output.txt","w");
	for(int i = 0; i<size-2;i++)
	{
		if(str[i] == str[size-2])
		
			fprintf(out,"%d ",i);
	}
	
	fclose(out);
	
	return 0;
}
