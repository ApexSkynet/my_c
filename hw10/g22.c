#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define SIZE 1000

void input(char *strIn)
{
FILE *in;
	
    in = fopen("input.txt", "r");
	
    while(fscanf(in, "%[^\n]", strIn) == 1);
	
    fclose(in);
}
 
void convertWord(char str[], char code[])
{
	char temp[SIZE] = "";
	temp[0] = str[0];
	int count = 1;
	for(int i = 1; i < strlen(str); i++)
{
		if(str[i] == 'b' || str[i] == 'f' || str[i] == 'p' || str[i] == 'v')
			temp[count++] = '1';
		else if(str[i] == 'c' || str[i] == 'g' || str[i] == 'j' || str[i] == 'k' || str[i] == 'q' || str[i] == 's' || str[i] == 'x' || str[i] == 'z')
			temp[count++] = '2';
		else if(str[i] == 'd' || str[i] == 't')
			temp[count++] ='3';
		else if(str[i] == 'l')
			temp[count++] = '4';
		else if(str[i] == 'm' || str[i] == 'n')
			temp[count++] = '5';
		else if(str[i] == 'r')
			temp[count++] = '6';
		else
			continue;
}
	count = 0;
	int countNoReps=0;
	for(int i = 0; i <strlen(temp); i++)
	{
		if(temp[i] != temp[i+1])
		{
			code[count++] = temp[i];
			countNoReps++;
		}	
	}
	if(strlen(code) < 4)
	{
		for(int i = countNoReps; i < 4; i++)
			code[i] = '0';
	}
}

void output(char *strOut)
{  
FILE *out;
    out = fopen("output.txt", "w");
    fprintf(out, "%.4s", strOut);
    fclose(out);
}
 
int main(int argc, char **argv)
{
char str[SIZE]={0}, strFinal[SIZE]={0};
    input(str);
    convertWord(str, strFinal);
    output(strFinal);
    return 0;
}
