#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define N 1000

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	out = fopen("output.txt","w");
	char name[N]="";
	char surname[N]="";
	char fatherName[N]="";
	fscanf(f,"%s %s %s",surname, name, fatherName);
	fprintf(out, "Hello, %s %s!", name, surname);
	fclose(f);
	fclose(out);
	
	return 0;
}
