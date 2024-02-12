// Author: jyotir07
#include<stdio.h>
int div(int a, int b)
{
     return a/b;
}
int divr(int a, int b)
{
    return a%b;
}
/*int check(int b)
  {
    if(b==0)
    printf("Invalid Input!");
  }*/
int main()
{
    int a,b;
  printf("Welcome to the calculator!!\n");
   
  printf("Enter numirator:");
  scanf("%d", &a);
  printf("Enter denominator:");
  scanf("%d", &b);
  if(b!=0){
  printf("Questiont:%d\n", div(a,b));
  printf("Remainder:%d", divr(a,b));
   }
   else
   {
    printf("Invalid input.");
   }
  
return 0;
}
