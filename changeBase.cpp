#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main (){
    int dNum;
    int i=0,j;
    int binArr[20];

    cout << "Enter the decimal number: ";
    cin >> dNum;

    if(dNum == 0){
        cout << "binary num= 0";
        getch();
        exit(0);
    }
        
    
    for (i=0; dNum>0; i++){
        binArr[i]=dNum%2;
        dNum=dNum/2;
    }
    cout << "binary number is: ";
    for(j=i; j>=0; j--)
    {
        cout << binArr[j];
    }
    
    return 0;
}