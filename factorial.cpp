#include <iostream>
using namespace std;
// This program calculate Factorial of a number

	int main (){
		
         while (true){
         	int num;
		    long int f=1;
		
	       	cout << "Please enter a number :";
		  	cin >> num;
			
				while(num>0){
			        f *= num;
				    num--;
			 
			      	}
		 	cout << "Factorial of ( " << num << " ) : " 
		 	<< f << "\n\n";      		         	
		     }
	     system ("PAUSE");	
	     return 0;
	}
