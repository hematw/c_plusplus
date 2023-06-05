#include <iostream>
#include <stdlib.h>

using namespace std;
 
bool prime (int x){
	for (int i = 2;i<13 ;i++){
		if (x%i==0)
			return false;
	}
	return true;
}    
int main (){

cout << prime(20);
}
