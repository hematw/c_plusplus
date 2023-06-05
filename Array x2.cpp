#include <iostream>
using namespace std;

void doublePrint(int x, int Arr[]);
int main()
{
	int n;
	cout << "Enter the size of Array: ";
	cin >> n;
	int Arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Arr[" << i << "]= ";
		cin >> Arr[i];
	}
	doublePrint(n, Arr);
	return 0;
}
void doublePrint(int x, int Arr[])
{
	cout << "2 x Arr[" << x << "]= {";
	for (int j = 0; j < x; j++)
	{
		cout << Arr[j] * 2 << ", ";
	}
	cout << "}";
}
