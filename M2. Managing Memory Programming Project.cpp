// M2. Managing Memory Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

int main()
{
	int size = 7;
	int* arr = new int[size];

	for (int a = 0; a < size; a++)
	{
		cout << "Enter a number: ";
		cin >> arr[a];
		cout << endl;
	}

	delete[] arr;

	return 0;
}

int* ReverseArray(const int arr[], int size)
{


	return nullptr;
}

void print(const int arr[], int size)
{

}
