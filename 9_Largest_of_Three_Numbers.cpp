#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number ";
  cin >> n;
  int m;
  cout << "Enter number ";
  cin >> m;
  int p;
  cout << "Enter number ";
  cin >> p;

  if (n >= m && n >= p)
  {
    cout << "First number is largest: " << n;
  }
  else if (m >= n && m >= p)
  {
    cout << "Second number is largest: " << m;
  }
  else
  {
    cout << "Third number is largest: " << p;
  }
  return 0;
}
