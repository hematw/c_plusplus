#include <iostream>
using namespace std;

int asd(int a,int b){
	
	return a*b;
}

int asd(int a,int b=3, int d=2){
	
	return a+b+d;
}
int main(){
	
	cout << asd(5,2);
	return 0;
}
