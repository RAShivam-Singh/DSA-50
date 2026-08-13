#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number ";
  cin >> n;

  if (n % 2 == 0)
    cout << "even";

  else
    cout << "odd";

  cout << n;
  return 0;
}
