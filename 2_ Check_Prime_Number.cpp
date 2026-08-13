#include <iostream>
using namespace std;
int main()
{
  int n , i;
  cout << " ENTER NUMBER";
  cin >> n;
  

  if (n <= 1)
  {
    cout << "NOT PRIME NUMBER";
  }
  else
  {
    for (i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        cout << "NOT PRIME NUMBER";
        return 0;
      }
    }
    cout<<"PRIME NUMBER";
  }
  return 0;
}
