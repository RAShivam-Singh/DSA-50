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

  bool found = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        cout << "Duplicate  Element = " << arr[i] << endl;
        found = true;
        break;
      }
    }
  }

  if (!found)
  {
    cout << "Element not found";
    return 0;
  }
}