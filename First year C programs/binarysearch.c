//Author: Jyotiraditya Singh
//Github: jyotir07

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
  int left = 0;
  int right = size - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
      return mid; // Element found at index 'mid'
    }
    else if (arr[mid] < target)
    {
      left = mid + 1; // Search in the right half
    }
    else
    {
      right = mid - 1; // Search in the left half
    }
  }

  return -1; // Element not found
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int size = sizeof(arr) / sizeof(arr[0]);
  int target = 12;

  int n = binarySearch(arr, size, target);

  if (n != -1)
  {
    printf("Element %d found at index %d.\n", target, n);
  }
  else
  {
    printf("Element %d not found in the array.\n", target);
  }

  return 0;
}
