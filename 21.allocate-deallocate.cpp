#include <iostream>
using namespace std;
int main() 
{

	int* arr = new int[5];
    cout << "Enter 5 values in the array: ";
    
    for(int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}	
	cout << "\nArray elements: ";
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	
	delete [] arr;

    cout << "\nGarbage array values after deallocation of array memory: ";
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
