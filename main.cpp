#include <iostream>
#include <stdio.h>
#include <Rational.h>
#include <arraydealer.h>


using namespace std;

int main()
{
  int** m;
  unsigned rows, cols;
  cin >> rows >> cols;

  m = new int*[rows];
  for (unsigned i = 0; i < rows; i++)
    m[i] = new int[cols];

  for (unsigned i = 0; i < rows; i++)
  {
    for (unsigned j = 0; j < cols; j++)
      m[i][j] = j + i;
  }

  for (unsigned i = 0; i < rows; i++)
  {
    for (unsigned j = 0; j < cols; j++)
      printf("%4d ", m[i][j]);
    cout << endl;
  }

  cout << endl;

  row_sum(m, rows, cols);

  cout << endl << col_sum(m, rows, cols) << endl;

  cout << "it still dose not print this, i have no idea why";

  Rational a(1, 2);
  cout << 2;
  double d = 0.5;
  int c = 1;
  Rational b(d);
  Rational e(c);
  cout << (a < b) << " " << (a > c);

  return 0;
}
