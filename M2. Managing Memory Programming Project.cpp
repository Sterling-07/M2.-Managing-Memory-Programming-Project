// M2. Managing Memory Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Date: 2 / 26 / 26
* Programmer: Philip Rodgers
* Program Explanation: This is a program that creates and array of numbers and reverses them using pointers and dynamically allocated memory. 
* The program allows the user to enter any six numbers they want and it will save them within the array. After this the program reverses the
* array by saving it as a pointer and using the ReverseArray function. Next the program prints the original array first and then prints the 
* reversed array afterwards using the  print function. 
*/

#include <iostream>
using namespace std;

//This function reverses the original array using pointers. 
int* ReverseArray(const int arr[], int size);

//This function prints the original array and the reversed array. 
void print(const int arr[], int size);

int main()
{
	//Create your variables and dynamically allocate the memory of your array. 
	const int size = 6;
	int* arr = new int[size];

	//Gets the user's input based on what numbers they would like to put in the array. 
	for (int a = 0; a < size; a++)
	{
		cout << "Enter a number: ";
		cin >> arr[a];
		cout << endl;
	}

	//Save the ReverseArray function as a pointer 
	int *ptr = ReverseArray(arr, size);

	//Print the original array
	cout << "Original Array:\n";
	print(arr, size);

	//Print the reversed array using the pointer to the ReverseArray function.
	cout << "Reversed Array:\n";
	print(ptr, size);

	//Safely delete the dynamically allocated memory from the array. 
	delete[] arr;
	
	return 0; 
}

int* ReverseArray(const int arr[], int size)
{
	//Create the backwards variable that will be used to save the reversed array.
	int* backwards = new int[size];
	 
	for (int a = 0; a < size; a++)
	{
		//Save the reversed array as the backwards variable.
		backwards[a] = arr[size - 1 - a];
	}

	//Return the backwards variable with the reversed array back to main. 
	return backwards;
}

//Print the orginial and reversed arrays. 
void print(const int arr[], int size)
{
	for (int a = 0; a < size; a++)
	{
		cout << arr[a] << " " << endl;
	}
}
