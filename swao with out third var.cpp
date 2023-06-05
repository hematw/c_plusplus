#include <iostream>
using namespace std;


int main(){
	int a,b;
	cout << "enter the value for A and B: ";
	cin>> a >>b;
	cout << "the value of A = \n"<< a<< " B = "<<b<<endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "After swap: \n";
	cout << "A = "<< a << "\nB ="<<b;
}
