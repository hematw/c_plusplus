#include <iostream>
#include <math.h>
using namespace std;

double area(int );
double prm(int );



int main(){
	
	int rad;
	cin>> rad;
	cout << area(rad) << endl;
	cout << prm(rad) << endl;
	return 0;
}


double area(int y){
	const float pi = 3.14;
	double area = 2*pi*pow(y,2);
	return area;
}

double prm (float r){
	const float pi = 3.14;
	double prm =2*pi*r;
	return prm;
}
