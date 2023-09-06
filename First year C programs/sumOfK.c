// code by Jyotiraditya Singh.
#include <stdio.h>
int main()
{
  int n, k;
  printf("Number of elements: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter element at %d: ", i);
    scanf("%d", &a[i]);
  }
  for (int j = 0; j < n; j++)
  {
    printf("%d ", *(a + j));
  }

  // scanning the number
  //number of times num is sum 
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
  int count;
  for (int i = 0; i < n; i++)
  {
    if (a[i] + a[i] = num)
    {
      count++;
    }
    else
    {
      i++;
    }
  }
  printf("\n%d ", count);
  return 0;
}