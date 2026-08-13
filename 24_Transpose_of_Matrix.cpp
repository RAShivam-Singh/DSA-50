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
  int T[columns][rows];

  // Input matrix
  cout << "Enter matrix:" << endl;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cin >> A[i][j];
    }
  }

  // Transpose
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      T[j][i] = A[i][j];
    }
  }

  // Print transpose
  cout << "Transpose of matrix:" << endl;

  for (int i = 0; i < columns; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << T[i][j] << " ";
    }

    cout << endl;
  }

  return 0;
}