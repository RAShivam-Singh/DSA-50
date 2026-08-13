#include <iostream>
using namespace std;
int main()
{

  int n;
  cout << "Enter the size = ";

  cin >> n;

  int arr[n - 1];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int arrsum = 0;

  for (int i = 0; i < n - 1; i++)
  {
    arrsum = arrsum + arr[i];
  }

  int expectedsum = n * (n + 1) / 2;
  int missing = expectedsum - arrsum;
  cout << missing;
}