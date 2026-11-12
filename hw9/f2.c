void sort_even_odd(int size, int a[])
{
	int temp[size];
	int countEven = 0;
	for(int i = 0; i < size; i++)
		if(a[i] % 2 == 0)
			{
				temp[countEven] = a[i];
				countEven++;
			}
	for(int j = 0; j<size;j++)
		if(a[j] % 2 != 0)
			{
				temp[countEven++] = a[j];
			}
	
	for(int i = 0; i< size; i++)
		a[i] = temp[i];
}
