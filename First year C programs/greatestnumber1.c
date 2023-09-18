#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    if(a>b,a>c)
    {
        printf("A is the greatest number");
    }
    else if(b>a,b>c)
    {
        printf("B is the greatest number");
    }
    else if(c>a,c>b)
    {
        printf("C is the greatest number");
    }
    return 0;
}
