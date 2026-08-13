#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter the number = ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int count = 0;
  int key;
  cout << "Enter the find num =  ";
  cin >> key;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      count++;
    }
  }

  cout << "Frequency = " << count;
}