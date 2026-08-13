#include <iostream>
using namespace std;
int main()
{
  int n;

  int rev = 0;
  int digit;
  cout << "Enter number ";
  cin >> n;
  for (; n > 0; n = n / 10)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
  }

  cout<< rev;
}