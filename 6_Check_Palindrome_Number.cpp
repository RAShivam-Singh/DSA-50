#include <iostream>
using namespace std;
int main()
{
  int n;
  int digit;
  int rev = 0;

  cout << "Enter number ";
  cin >> n;
  int original = n;

  while (n > 0)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
    n = n / 10;
    

  }
  if (original == rev)
  {
    cout << " palindrome";
  }
  else
  {
    cout << " not palindrome";
  }
}