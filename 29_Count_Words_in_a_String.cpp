#include <iostream>
#include <string>
using namespace std;

int countWords(string str)
{
  int count = 1;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == ' ')
    {
      count++;
    }
  }

  return count;
}

int main()
{
  string str;

  cout << "Enter a string = ";
  getline(cin, str);

  int result = countWords(str);

  cout << "Number of words = " << result;

  return 0;
}