#include <iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter the size of array = ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "searching number ";
  cin >> key;

  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      cout << "Element found at index" << mid;
      return 0;
    }

    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  cout << "Element not found";

  return 0;
}