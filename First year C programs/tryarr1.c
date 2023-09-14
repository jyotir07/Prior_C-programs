// code by Jyotiraditya Singh
#include <stdio.h>
void rev(int *arr, int left, int right)
{
  int i = left, j = right, temp;
  for (int i = left, j = right; i < j; i++, j--)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}
int main()

{
  int n, k;
  printf("Number of elements:");
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
  // moving the elements of the array by k positions
  // a[]= {10,20,30,40,50}

  // reverse the array and call the reverse function k times or something
  int x;
  printf("\nEnter the number of shifts: ");
  scanf("%d", &x);
  x = n - k;
  rev(a, 0, x - 1);
  rev(a, x, n - 1);
  rev(a, 0, n - 1);

  // printing the output
  for (int z = 0; z < n; z++)
  {
    // printf("%d ", *(a + n));    undesired output?
    printf("%d ", a[n]); // check the output
  }
  return 0;
}