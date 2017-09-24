#include <stdio.h>

int main(){
  //seed the rng
  srand( time(NULL) );

  //declare vars
  int arr[10];
  int *p = & arr[9];
  int arr2[10];
  int i; //helper i

  //populate arr
  for(i = 0; i < 9; i++){
    arr[i] = rand();
  }
  arr[9] = 0;

  //print arr
  printf("The original array:\n");
  for(i = 0; i < 10; i++){
    printf("arr[%d]: ", i);
    printf("%d\n", arr[i]);
  }

  //reverse arr into arr2
  for (i = 0; i < 10; i++){
    arr2[i] = *p;
    p--;
  }

  //print arr2
  printf("The original array:\n");
  for(i = 0; i < 10; i++){
    printf("arr2[%d]: ", i);
    printf("%d\n", arr2[i]);
  }
}
