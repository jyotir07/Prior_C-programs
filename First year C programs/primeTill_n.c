// Author: jyotir07 @github
#include <stdio.h>
int main()
{
  int n, i, fact, j;
  // scanning the range
  printf("Enter the Number: ");
  scanf("%d", &n);
  printf("Prime Numbers are: \n");
  for (i = 1; i <= n; i++)
  {
    fact = 0;
    for (j = 1; j <= n; j++)
    {
      // prime number logic
      if (i % j == 0)
        fact++;
    }
    if (fact == 2)
      printf("%d ", i);
  }
  return 0;
}
