#pragma once
void insertSortUp(int array[], int first, int last)
{
	int i, j, temp;
	for (i = first + 1; i <=last; i++)
	{
		temp = array[i];
		j = i - 1;
		while ((j >= 0) && (array[j]>temp))
		{
			array[j + 1] = array[j];
			j--;
		}
		if (j != i - 1)
		{
			array[j + 1] = temp;
		}
	}
}