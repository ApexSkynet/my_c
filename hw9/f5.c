int find_max_array(int size, int a[])
{
	int temp;
	for(int i = 0; i < size; i++)
		for(int j = 1; j < size; j++)
			if(a[j-1] > a[j])
				{
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
	return a[size-1];
}
