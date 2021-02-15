#include <iostream>
using namespace std;

int Partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pindex = start;	//pindex is always pointing at the start of the larger element section
	//if we point pindex = -1; the it is pointing at the end of the smaller region elements
	for (int i = start ; i < end ; i++)
	{
		if (arr[i] <= pivot)
		{
			swap(arr[i], arr[pindex]);
			pindex++;
		}

	}
	swap(arr[end], arr[pindex]);
	return pindex;
}

void quickSort(int arr[], int s, int e)
{
	if (s >= e)
		return;
	int pindex = Partition(arr, s, e);
	quickSort(arr, s, pindex - 1);
	quickSort(arr, pindex + 1, e);
}


int main()
{

	int arr[] = {2, 3, 1, 0, 4, 9, 6, 5, 5, 20};
	quickSort(arr, 0, 9);
	for (int i = 0 ; i < 10 ; i++)	cout << arr[i] << " ";



}