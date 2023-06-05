#include <iostream>
#include <conio.h>

using namespace std;

void swap(int,int);

int main(){
	
	cout << "Enter the value of X and Y respectively: \n X = ";
	cin >> a ;
	cout << "Y = ";
	cin >> b;
	
	swap(a,b);
	
	getch ();		
	system("pause");
	return 0;
}

void swap(int x, int y){
	
	

	int z = x;
    x = y;	
	y = z;
	
	cout <<"X is equal to: " <<x << endl <<"Y is equal to: "<< y << endl;
	
}
