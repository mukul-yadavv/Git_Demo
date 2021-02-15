#include <iostream>
#include <algorithm>
bool compare (int a , int b)
{
	return a > b;
}

using namespace std;

// int main()
// {
// 	int n;
// 	n=5;
// 	int arr[5]={5,3,5,4,6};
// 	sort(arr, arr+n);	//because its range is [arr, arr+n)	so the arr+n is not included
// 	for(int i=0 ; i<n ;i++)
// 		cout<<arr[i]<<" ";
// }

// if you return the reverse order then one way is running for loop in decreasing order and another is by using compare function

int main()
{
	int n;
	n = 5;
	int arr[5] = {5, 3, 5, 4, 6};
	sort(arr, arr + n, compare);
	for (int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
}