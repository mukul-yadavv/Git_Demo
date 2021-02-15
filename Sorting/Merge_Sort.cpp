#include <iostream>
using namespace std;

void merge(int arr[],int s, int e)
{
	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;
	int k = s;

	int temp[100];
	while(i<=mid and j<=e)
	{
		if(arr[i]<arr[j])	
			temp[k++] = arr[i++];
		else 
			temp[k++] = arr[j++];
	}
	while(j<=e)	
	{
		temp[k++] = arr[j++];
	}
	while(i<=mid)
	{
		temp[k++] = arr[i++];
	}

	for(int q=s; q<=e; q++)	arr[q] = temp[q];

}

void merge_sort(int arr[], int s, int e)
{
	// base case
	if(s>=e)	return;
	// rec case

	// 3 steps
	// 1 break on the mid point
	
	int mid = (s+e)/2;
	// 2 recursive break in to smaller parts
	 merge_sort(arr,s,mid);

	 merge_sort(arr,mid+1,e);
	
	// 3 merge them
	 

	merge(arr,s,e);


}

int main()
{
	int n =3;
	int arr[] = {5,4,1};
	

	merge_sort(arr,0,n-1);
	for(int i=0 ; i<n ; i++)
		cout<<arr[i]<<" ";

}