#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter Number";
  cin >> n;
  int a = 0;
  int b = 1;
  int c;

  for (int i = 1; i <= n; i++)
  {
    cout << a << "  ";
    c = a + b;
    a = b;
    b = c;
  }
}