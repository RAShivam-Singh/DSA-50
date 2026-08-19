#include <iostream>
using namespace std;
int main()
{

  string s;

  cout << "Enter the string = ";
  cin >> s;

  int start = 0;
  int end = s.length() - 1;

  bool palindrome = true;

  while (start < end)
  {
    if (s[start] != s[end])
    {
      palindrome = false;
      break;
    }

    start++;
    end--;
  }
  if (palindrome)
    cout << "Palindrome";
  else
    cout << "Not Palindrome";

  return 0;
}