#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	/*	int num;
		cin>> num;*/
	int arr[5] = { 15,
				   22,
				   44,
				   63,
				   16 };
	
	int i,max=0;
	
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "max= " << max;
	getch();
	return 0;
}
