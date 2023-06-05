#include <iostream>
using namespace std;
int main()
{

  {
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i == 1 || i == n || j == n / 2 + 1)
        {
          cout << "* ";
        }
        else
        {
          cout << "  "; // 2ws // 2 whitespace
        }
      }
      cout << endl;
    }
    cout << "\n\n";
  }

  {

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (j == 1 || j == n || i == n)
        {
          cout << "* ";
        }
        else
        {
          cout << "  "; //  2ws
        }
      }
      cout << endl;
    }
  }

  return 0;
}