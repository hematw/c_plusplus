#include <iostream>
using namespace std;

void swap(int x,int y){
	x=x+y;
	y=x-y;
	x=x-y;
	cout << "AFTER SWAP\nFirst int changed to = "<< x << endl;
	cout << "Second int changed to = "<< y <<"\n\n";
}
void swap(double x,double y){
	x=x+y;
	y=x-y;
	x=x-y;
	cout << "AFTER SWAP\nFirst float changed to = "<< x << endl;
	cout << "Second float changed to = "<< y <<"\n\n";
}
void swap(char x ,char y){
	char z=x;
	x=y;		y=z;
	cout <<"AFTER SWAP\nFirst char changed to: "<< x<<endl;
	cout <<"Second char changed to: "<< y<<"\n\n";	
}

int main (){
	swap(12,13);
	swap(2.7,3.14);
	swap('a','A');
	
	system("pause");
	return 0;
}
