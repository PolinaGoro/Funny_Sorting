// Funny_Sorting.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;



int * Vstavka_sort(int *arr, int size)
{
	int minl = 0 ;
	while (minl <= size)
	{
		int temp,min;
		for (int i = minl; i < size; i++)
		{
			min = arr[i];
			if (arr[i] > arr[i + 1])
				min = arr[i + 1];
		}
		arr[minl] = min;
		minl++;
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
	arr = Vstavka_sort(arr, size);
	Output(arr);
	system("pause");
    return 0;
}

