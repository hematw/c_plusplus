// this program is for changing value of variable through 3rd variable
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(){
	
	int x ;
	int y ;
	
	cout << "________________Give me numbers for swap________________\n\n";
	cout << "Enter the value of X and Y respectively: ";
	cin >> x >> y;
	int z = x;
    x = y;	
	y = z;
	
	cout <<"x is equal to: " <<x << endl <<"y is equal to: "<< y << endl;
	getch ();
	
	
	system("pause");
	return 0;
}
