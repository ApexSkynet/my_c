void swap_negmax_last(int size, int a[])
{
	int indMaxNeg = 0;
	int count = 0;
	for(int i = 1; i<size; i++)
	{
		if(a[i] < a[indMaxNeg])
			indMaxNeg = i;
		if(a[i-1] <0)
			count++;
		
	}
	for(int i = 0; i<size; i++)
	{
		if(a[i] < 0 && a[i] > a[indMaxNeg])
		{
		indMaxNeg = i;
		}
	}
	if(count != 0)
	{
		int temp = a[size-1];
		a[size-1] = a[indMaxNeg];
		a[indMaxNeg] = temp;
	}
}
