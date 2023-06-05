#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{   
    int n;
    srand(time(0));
    cout << 1+(rand()%6)<<endl ;
    
    return 0;
} 
