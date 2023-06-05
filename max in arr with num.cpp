#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
		int num;
		cout << "Enter the size of set: ";
		cin>> num;
		int arr[num];
	
			for (int i = 0; i < num; i++)
			{
				cin>> arr[num];
			}
			
		int max=0;
		
			for (int i = 0; i < num; i++)
			{
				if (arr[i] > max)
					max = arr[i];
			}
		cout << "max= " << max;
//		getch();
		return 0;
}
