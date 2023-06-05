#include <iostream>
using namespace std;
//this  code written by hemat

int main(){
		   while (true){
		   	int x,pow;
		    int y=1;
		    cout << "Enter the Base: \n";
		    cin  >> x;
		    cout << "Enter the Power of Base: ";
		    cin >> pow;
		    int h=x;
		   
		    while (y<pow){
		    x=x*h;
		    y++;
		    }
		    cout << x <<"\n\n";
		   	
		   	
		   	
		   	
		   } 
       system ("PAUSE"); 
       return 0;
       
}
    
