#include <iostream>
using namespace std;

void bubble_sort(int arr[] , int n)
{
	for (int i = 1 ; i < n ; i++) // loop will run n-1 times because we have to do n-1 elements to the end
	{
		for (int j = 0 ; j < (n - i) ; j++)
		{
			if (arr[j] > arr[j + 1])		swap(arr[j], arr[j + 1]);
		}
	}
}

int main()
{
	int n;
	n = 10;
	int arr[10] = {1, 54, 34, 53, 67, 64, 678, 45, 54, 54};
	bubble_sort(arr, n);
	for (int i = 0 ; i < n ; i++)	cout << arr[i] << " ";

}