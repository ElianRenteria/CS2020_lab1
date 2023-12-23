#include "funcs.h"
int linear_search(int a[], int size, int key)
{
	for(int j = 0; j < size; j++)
	{
		if( a[j] == key)
			return j;
	}
	return -1;
}
