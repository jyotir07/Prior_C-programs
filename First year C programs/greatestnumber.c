// Author: jyotir07
#include<stdio.h>
int main()
{
int a=0, b=0, c=0;
printf("Enter three numbers:");
scanf("%d,%d,%d", &a,&b,&c);
if(a>b){
    if(a>c){
        printf("%d is the greatest.", a);
    }

    else if(b>a){
        if(b>c){
            printf("%d is greatest.", b);
        }
    }
    else if(c>a){
        if(c>b){
            printf("%d is the geatest.", c);
        }
    }
}

return 0;
}
