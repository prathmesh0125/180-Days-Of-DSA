#include <iostream>
using namespace std;
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void pushZerosToEnd(int arr[], int n)
{

	int i = 0, j = 0;
	while (j < n)
	{
		if (arr[j] != 0)
		{
			swap(arr[i++], arr[j]);
		}
		j++;
	}
}

int main()
{
	int arr[5] = {3, 5, 0, 0, 4};
	// Output: 3 5 4 0 0
	pushZerosToEnd(arr, 5);
	print(arr, 5);
}