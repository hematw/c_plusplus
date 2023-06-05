#include <iostream>
#include <stdlib.h>

using namespace std;
    
int main (){
	while(true){
		int num ,count=0;

        cout << "Enter a number: ";
        cin >> num;

        for ( int i = 1; i<=num; i++){
            if (num%i==0)
                count ++;
        }
        system ("CLS");
        if (count == 2)
            cout << num << " IS A PRIME NUMBER.\n\n";
        else
            cout << num << " IS NOT A PRIME NUMBER.\n\n";
            }

}
