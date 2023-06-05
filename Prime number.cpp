#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    system("CLS");
    int i,j=2,ch=0;
    
    cout << "Enter a number: ";
    cin >> i;
    // check for 1
    if(i<=1)
        ch=1;
    while (j<=i/2){
        if (i%j==0){
            ch = 1;
            break;
        }
        else{
            j++;
        }
    }
    if (ch==0)
    cout << i << " is prime";
    else
    cout << i <<" is not prime";
}