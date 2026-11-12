int compression(int a[], int b[], int N)
{
	int count = 1;
	int countB = 0;
	if(a[0] == 1)
	{
		b[0] = 0;
		countB++;
	}
	for(int i = 0; i < N-1; i++)
	{
		
		if(a[i] == a[i+1])
		{
			count++;
		}else{
			b[countB] = count;
			countB++;
			count = 1;
		}
	}
b[countB++] = count;
	return countB;
}
