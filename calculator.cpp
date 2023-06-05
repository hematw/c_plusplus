	#include <iostream>
	#include <string>
	#include <conio.h>
	using namespace std;
	
	int add();
	int sub();
	int multi();
	float div();
	
	int main(){
		
		char op;
		cout << "Please choose the operation: \n\n";
		cout << "You can use...\n  Addition(+) \n  Subtraction(-) \n  Multiplacation(*) \n  Division(/)\n";
		cin>> op ;
		system("CLS");
		
	
				if (op=='a'||op=='A'||op=='+')
					add();
				
			else if (op=='s'||op=='S'||op=='-')
					sub();	
			
			else if (op=='m'||op=='M'||op=='*')
					cout<<multi();
			
			else if (op=='d'||op=='D'||op=='/')
					cout<<div();
			getch();		
				
	}
	
	int add (){
			cout<< "Please enter the numbers to add: \n";
		
			int r=0;
			while (true){
				int a;
				
				cin>> a;
				r=r+a;
				cout<<" = "<< r<<" + ";
	}
	}
	
	int sub(){
				cout<< "Please enter the numbers to subract: \n";
			int i=0;
			int r=0;
			while (true){
				int a;
				cin>> a;
				
					if(i==0){
						r=a;
						cout<<" = "<< r<<" - ";
						i++;
						
					}
					
					else{
						r=r-a;
						cout<<" = "<< r<<" - ";
					}
			
	                   }
		     }
		
		
	int multi(){
			
		int a,b;
		cout<< "Please enter the numbers to multiply: \n";
		cin>> a>>b;
		int r=a*b;
	
		
		return r;	
		}
		
		
	float div(){
			
		float a,b;
		cout<< "Please enter the numbers to divide: \n";
		cin>> a>>b;
		float r=a/b;
		
		
		return r;	
		}
