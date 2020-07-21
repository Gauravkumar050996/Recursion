#include<iostream>

using namespace std;


void fun(int a)
{
	if (a<=0)
		return;
	cout << a; 
	cout << ":Pre hello" << endl;
	fun(a-1);
	cout << a<<"In hii" << endl;
	fun(a - 2);
	cout <<a<< ": Post bye" << endl;
	
}

int find_count(int arr[], int n, int idx, int data)
{
	if (idx == n)
		return 0;
	int count = 0;
	int recAns = find_count(arr, n, idx + 1, data);
	if (arr[idx] == data)
		count++;

	return recAns + count;

}

int all_sum(int arr[], int n, int idx)
{
	if (idx == n)
		return 0;
	return all_sum(arr, n, idx + 1) + arr[idx];

}
int main()
{
	
	//fun(5);
	int arr[] = { 2, 6, 5, 7, 2, 8, 2, 9,5,2};
	//cout<<find_count(arr, 10, 0, 2);
	cout << all_sum(arr, 10, 0);
	cin.get();
	return 0;
}