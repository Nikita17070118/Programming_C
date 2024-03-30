#include <math.h>
double sum (matrix_a, matrix_b, matrix_c, n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matrix_c[i][j]=matrix_a[i][j]+matrix_b[i][j];
      printf(matrix_c[i][j]);
    }
    printf("\n");
  }
}
