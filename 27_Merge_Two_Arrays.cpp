#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the first arr size =";
  cin >> n;

  int arr1[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }

  int m;
  cout << "Enter the second arr size =";
  cin >> m;

  int arr2[m];

  for (int i = 0; i < m; i++)
  {
    cin >> arr2[i];
  }

  cout << "Merge of two arrays = ";

  for (int i = 0; i < n; i++)
  {
    cout << arr1[i] << " ";
  }
  for (int i = 0; i < m; i++)
  {
    cout << arr2[i] << " ";
  }

  return 0;
}