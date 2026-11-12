int is_two_same(int size, int a[])
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(a[j] == a[i] && i != j)
				return 1;
		}
		if (i == size-1)
			return 0;
	}
}
