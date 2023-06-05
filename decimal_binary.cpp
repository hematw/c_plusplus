#include <iostream>
#include <conio.h>
using namespace std;

void bin(int a);
int main()
{

	int x;
	cout << "Enter decimal number: ";
	cin >> x;

	bin(x);
	getch();
	return 0;
}
void bin(int a)
{

	if (a > 0)
	{
		bin(a / 2);
		cout << a % 2;
	}
}
