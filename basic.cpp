#include<iostream>

using namespace std;

void print(int n)
{
	if (n == 0)
		return;
	cout << "hello" << endl;
	print(n - 1);

}
void number(int n)
{
	if (n == 0)
		return;
	cout << "Hii" << endl;
	number(n - 1);
	cout << "Bye" << endl;
}

void oddEven(int n)
{
	if (n == 0)
	{
		cout << "Base: " << n << endl;
		return;
	}
	if ((n & 1) == 0)
		cout << "Even: " << n << endl;

	oddEven(n - 1);

	if ((n & 1) != 0)
		cout << "Odd: " << n << endl;
}
int main()
{
	//print(10);
	//number(10);
	oddEven(10);

	cin.get();
	return 0;
}