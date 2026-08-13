// #include<iostream>
// using namespace std;
// int main(){
//   int n ;
//   int k = 1;
//   cout << "Enter number ";
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     k =  k * n;
//   }
//   cout <<" " <<k;

// }

#include <iostream>
using namespace std;

int main()
{
  int n;
  int k = 1;

  cout << "Enter number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    k = k * i;
  }

  cout << "Factorial = " << k;

  return 0;
}