#include <iostream>
using namespace std;


int add(int x,int y){
	

	return x+y;
}

int main(){
	int a,b;
	cout << "Enter numbers to sum: ";
	cin>> a >> b;
	cout << add(a,b);
	return 0;
}
