void print_digit(char s[])
{
	int digitCounter[10] = {0};
	int i =0;
	while(s[i]){
		if(s[i] >= '0' && s[i]<='9')
			digitCounter[s[i]-'0']++;
		i++;
	}
	for(int j = 0;j < 10;j++)
		if(digitCounter[j] != 0)
			printf("%d %d\n",j,digitCounter[j]);
}
