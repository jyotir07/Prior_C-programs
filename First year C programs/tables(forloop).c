// Author: jyotir07 @github
#include<stdio.h>
int main()
{
int n1=0, mul, i;
printf("Welcome!\n");

// scanning the number 
printf("Enter the number:");
scanf("%d", &n1);
// creating the loop for the 10 numbers

for(i=1; i<=10; i++){
    printf("%d * %d = %d\n", n1, i, n1*i);
}
return 0;
}
