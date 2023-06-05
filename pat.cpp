#include <iostream>
using namespace std;


int main(){
	int l=11;
	
	for (l;l>=1;l--){
		for (int b=l;b<=l;b++){
		cout << '_';
		}
	
		for (int li=1;li<l;li++){
			cout << " *"<< endl;
		}
	}
}
