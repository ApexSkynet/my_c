int count_bigger_abs(int n, int a[])
{
	int count = 0;
	int maxEl = a[0];
	for(int i =0; i<n; i++)
	{
		if(a[i] > maxEl)
			maxEl = a[i];
	}
	for(int i =0; i<n; i++)
	{
		if((a[i]*(-1)) > maxEl)
			count++;
	}
	return count;
}
