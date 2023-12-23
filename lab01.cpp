#include <fstream>
#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
	int list[CAPACITY];
	int number, size, i, k, index;

	ifstream input("search.txt");
	while (input >> number)
	{
		list[i] = number;
		i++;
	}
	input.close();

	size = i;
	cout << "The array: \n";
	for(int c = 0; c < size; c++)//my code to print array
	{
		cout << list[c] << " ";
	}
	cout << "\nEnter the key: ";
	cin >> k;
	index = linear_search( list, size, k);
	if(index != -1)
		cout << "\nThe key " << k << " is at the index " << index << "\n";
	else
		cout << "\nThe key " << k << " is NOT in the array\n"; 	
	return 0;
}
	
