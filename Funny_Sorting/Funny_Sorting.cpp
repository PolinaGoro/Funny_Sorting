// Funny_Sorting.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;



void Quick_sort(int *arr, int min, int size)
{
	int point = size / 2;
	for (int i = min, j = size; i > j;)
	{
		if (arr[i] <= point) i++;
		else if (arr[j] >= point) j++;
		else
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j++;
		}
	}
	Quick_sort(arr, min, size/2);
	Quick_sort(arr, size / 2 + 1, size);
	//return arr;
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
	Quick_sort(arr, 0, size);
	Output(arr);
	system("pause");
    return 0;
}

