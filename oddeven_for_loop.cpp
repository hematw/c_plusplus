#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for (int i = 1;i<=10;i++){
    
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if(num%2==0)
        cout << num << " is even\n\n";
        else 
        cout << num<<" is odd\n\n";
    
    
    }
    system("pause");
    return 0;
}
