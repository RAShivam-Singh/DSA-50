#include <iostream>
using namespace std;

int main()
{
  int rows, columns;

  cout << "Enter rows = ";
  cin >> rows;

  cout << "Enter columns = ";
  cin >> columns;

  int A[rows][columns];
  int B[rows][columns];
  int C[rows][columns];

  // Input Matrix A
  cout << "Enter Matrix A:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cin >> A[i][j];
    }
  }

  // Input Matrix B
  cout << "Enter Matrix B:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cin >> B[i][j];
    }
  }

  // Matrix Addition
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  // Print Result
  cout << "Result:" << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}