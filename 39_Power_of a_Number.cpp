#include<iostream>
using namespace std;
int main(){
  int base;
  int power;

  cout<< "Enter base = ";
  cin >> base;
  cout <<"Enter power = ";
  cin >> power;

  int result = 1;

  for (int i = 0; i < power; i++)
  {
    result = result * base;
  }

  cout << "Result is = "<<result;
  
}