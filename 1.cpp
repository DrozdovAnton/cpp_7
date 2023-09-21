#include <iostream>
#include <string>
using namespace std;

/**
 * Filling the array.
 * @param size Size of array.
 * @param array Dinamic array.
 */
void setNumArray(size_t size, int array[]);

/**
 * Get values of array.
 * @param size Size of array.
 * @param array Dinamic array.
 */
void getArray(int array[], size_t size);

/**
 * Get min and max values of array.
 * @param size Size of array.
 * @param array Dinamic array.
 */
void getMinMax(int array[], size_t size);

// int* delNumArray(size_t size, int array[]);
// int* addNumArray(size_t size, int array[]);

int main()
{
	// Ввод размера массива
	cout << "Input size array: ";
	size_t n;
	cin >> n;
	cout << "Size array: " << n << '\n';

	// Создание массива с размером n
	int* arr = new int[n];
	setNumArray(n, arr);
	getArray(arr, n);

	getMinMax(arr, n);

	delete[] arr;
	return 0;

	/*
	// Заполнение и вывод массива
	setNumArray(n, arr);
	getArray(arr, n);

	// Удаление элемента из массива
	int *newArray = delNumArray(n, arr);
	getArray(newArray, n-1);
	delete[] arr;

	// Добавление элемента в массив
	int* newArr = addNumArray(n - 1, newArray);
	getArray(newArr, n);
	delete[] newArray;

	delete[] newArr;
	return 0;
	*/

}

void setNumArray(size_t size, int array[])
{
	cout << '\n' << "Set nums array" << '\n';

	for (int i = 0; i < size; i++)
	{ 
		int x;
		cout << i + 1 << ": ";
		cin >> x;

		array[i] = x;
	}
}

/*int* delNumArray(size_t size, int array[])
{
	cout << '\n' << "Delete num of array" << '\n';
	cout << "Input index (0; 1; ...): ";
	int index;
	cin >> index;

	int* newArray = new int[size-1];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (i != index)
		{
			newArray[j] = array[i];
			j++;
		}
	}

	return newArray;
}

int* addNumArray(size_t size, int array[])
{
	cout << '\n' << "Add num" << '\n';

	int* newArr = new int[size + 1];

	int newNum;
	cout << "Input num for add: ";
	cin >> newNum;

	for (int i = 0; i < size; i++)
	{
		newArr[i] = array[i];
	}
	newArr[size] = newNum;

	return newArr;
}*/

void getArray(int array[], size_t size)
{
	cout << '\n' << "Array:" << '\n';
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << '\n';
}

void getMinMax(int array[], size_t size)
{
	int minNum;
	int maxNum;

	minNum = array[0];
	maxNum = array[0];

	for (int i = 0; i < size; i++)
	{
		if (minNum > array[i])
		{
			minNum = array[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (maxNum < array[i])
		{
			maxNum = array[i];
		}
	}

	cout << '\n' << "Mininun num: " << minNum << '\n' << "Maximum num: " << maxNum << '\n';
}