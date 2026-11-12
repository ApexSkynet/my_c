void change_max_min(int size, int a[])
{
	int indMin = 0;
	int indMax= 0;
	
	for(int i =0; i<size; i++)
	{
		if(a[i] > a[indMax])
			indMax = i;
		if(a[i] < a[indMin])
			indMin = i;
	}
	int temp = a[indMax];
	a[indMax] = a[indMin];
	a[indMin] = temp;
}
