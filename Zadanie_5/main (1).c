#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main()
{
  int* a;
  int i, j, n;
  printf("Size matrix: ");
  scanf("%d", &n);
  a = (int*)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", (a + i * n + j));
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%5d ", *(a + i * n + j));
    }
    printf("\n");
  }
  sum (matrix_a, matrix_b, matrix_c, n);
  return 0;
}
