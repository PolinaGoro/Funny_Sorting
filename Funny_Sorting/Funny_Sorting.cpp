// Funny_Sorting.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;

int * Bubble_sort(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
		}
	}
	return arr;
}


void Output (int *arr)
{
	int i = 0;
	cout << "Number's array ouput:" << endl;
	while (arr[i]!= NULL)
	{
		cout << arr[i] << " ";
		i++;
	}
}

int * Input(int size)
{
		int * arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 1 + rand() % 101;
		}
		return arr;
}

int main()
{
	srand(time(NULL));
	cout << "Enter quantity of array, please : ";
	int size;
	cin >> size;
	int * arr = Input(size);
	arr = Bubble_sort(arr, size);
	Output(arr);
	system("pause");
    return 0;
}

