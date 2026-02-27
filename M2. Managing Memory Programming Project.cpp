// M2. Managing Memory Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

int main()
{
	const int size = 6;
	int* arr = new int[size];

	for (int a = 0; a < size; a++)
	{
		cout << "Enter a number: ";
		cin >> arr[a];
		cout << endl;
	}

	int *ptr = ReverseArray(arr, size);


	delete[] arr;
	
	return 0; 
}

int* ReverseArray(const int arr[], int size)
{
	int* backwards = new int[size];
	 
	for (int a = 0; a < size; a++)
	{
		backwards[a] = arr[size - 1 - a];
	}

	return backwards;
}

void print(const int arr[], int size)
{
	
}
