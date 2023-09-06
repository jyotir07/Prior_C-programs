/*code by Jyotiraditya Singh.*/
/*Linkedin: https://www.linkedin.com/in/jyotir-aditya-028925249*/
#include<stdio.h>
int main()
{
 char y, n, ok;
 printf("Welcome...!!\n");
 printf("You have to answer in y(yes) or n(no) only.\n");
 printf("Are you hungry...?\n");
 printf("Answer:");
 scanf("% c", &ok);
 if(ok==y){
    printf("Then get something to eat bro!!\n");
    printf("Th am I supposed to do about it!!");
 }
/* else if(ok==n){
    printf("Well then sleep... \n Goodnight Bro!!");

 }*/
 else{
    printf("Then sleep   :)");
   // printf("You didnt get the rules bro... \n Restart the program.");
 }
return 0;
}