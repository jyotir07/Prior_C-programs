/*code by Jyotiraditya Singh.*/
#include <stdio.h>
int main()
{
  // 2d array
  // matrix
  int r, c;
  printf("Enter r: ");
  scanf("%d", &r);
  printf("\n Enter c: ");
  scanf("%d", &c);

  // declaring the array
  int arr[r][c];

  // taking inputs
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  // printing the array
  for (int i = 0; i < r; i++)
  {
    printf("\n ");
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
  }

  // now printing the transpose of the matrix

  for (int i = 0; i < r; i++)
  {
    printf("\n");
    for (int j = 0; j < c; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
      for (int k = 0; k < r; k++)
      {
        printf("%d ", arr[i][j]);
      }
    }
  }
  return 0;
}