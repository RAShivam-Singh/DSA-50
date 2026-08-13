#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number  ";
  cin >> n;
  int original = n;

  int digit;
  int sum = 0;

  while (n > 0)
  {

    digit = n % 10;
    sum = sum + (digit * digit * digit);
    n = n / 10;
  }
  if (sum == original)
  {
    cout << "Armstrong number";
  }
  else
  {
    cout << " Not Armstrong number ";
  }
}