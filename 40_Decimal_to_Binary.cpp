#include <iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter number = ";
  cin >> n;

  int binary = 0;
  int place = 1;

  while (n > 0)
  {
    int rem = n % 2;
    binary = binary + rem * place;
    n = n / 2;
    place = place * 10;
  }
  cout << "Binary = " << binary;
}