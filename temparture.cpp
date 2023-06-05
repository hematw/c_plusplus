#include <iostream>
#include <conio.h>
using namespace std;
// this program change the temprature type
int main(){
	float ftemp;
    float ctemp;
    char op;
    
    cout << "Please choose the operation: \n";
    cout << "For Farenheit to Celceus (F)\n";
    cout << "For Celceus to Farenheit (C)\n";
    cin >> op;
    if (op=='f'||op=='F'){
		cout << "Please enter the value in farnheit: ";
	    cin >>ftemp;
		cout << "The temprature in Celcius is: "<<((ftemp-32)*5/9)<<'C';
		}
		
    if (op=='c'||op=='C'){
		cout << "Please enter the value in Celcius: ";
	    cin >> ctemp;
		cout << "The temprature in farnheit is: "<<((9/5)*ctemp+32)<<'F';
}

	getch ();
	
	system("pause");
	return 0;
}
