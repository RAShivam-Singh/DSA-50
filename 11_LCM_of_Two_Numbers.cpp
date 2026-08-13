#include <iostream>
using namespace std;
int main()
{
  int a, b;

  cout << " Ente number ";
  cin >> a >> b;
  int x = a;
  int y = b;

  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  int gcd = a;

  int lcm = (x * y)/gcd;
  cout << " LCM "<< lcm;
}