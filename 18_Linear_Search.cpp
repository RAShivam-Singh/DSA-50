#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size = ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "Enter search element = ";
  cin >> key;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      cout << "Element found at index = " << i;
      return 0;
    }
  }
  cout << "Element not found ";
}
