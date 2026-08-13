#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cout << "Enter the word  ";
  cin >> s;


  int count[26] = {0};
  string ans = "";

  for (int i = 0; i < s.length(); i++)
  {
    int index =  s[i] - 'a' ;
    if (count [index] == 0)
    {
      ans = ans + s[i];
      count[index] = 1;
    }
    
  }
  cout << ans;
  
  return 0;
  
}