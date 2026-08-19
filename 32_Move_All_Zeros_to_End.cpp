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

  int index = 0;

  // Move non-zero elements to front
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      arr[index] = arr[i];
      index++;
    }
  }

  // Put zeros at the end
  while (index < n)
  {
    arr[index] = 0;
    index++;
  }

  // Print array
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}