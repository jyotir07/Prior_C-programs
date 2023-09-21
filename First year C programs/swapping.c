/*code by Jyotiraditya Singh.*/
#include<stdio.h>

//making a swap function
void swap(int *first, int *second){
  int temp;
  temp= *first;
  *first= *second;
  *second= temp;
}


int main()
{
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  int arr[n];


  printf("\nEnter elements...");
  
  //scaning the elements in the array 
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  //printing the array
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

  //swap(&arr[i], &arr[i+1])
return 0;
}