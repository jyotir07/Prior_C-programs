//Author: Jyotiraditya Singh
//Github: jyotir07
#include <stdio.h>
int binary_search(int *arr, int s, int v)
{
  int l = 0, r = size - 1, mid;
  while (l < r)
  {
    mid = (l + r) / 2;
    if (arr[mid] == v)
    {
      printf("Found at %d", mid);
      return;
    }
    elseif(v > arr[mid])
    {
      l = mid + 1;
    }
    else
    {
      rmid - 1;
    }
  }
  prinf("Not found\n");
}

int main()
{
  int n;
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
  return 0;
}
