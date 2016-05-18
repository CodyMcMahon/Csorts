#include <stdio.h>
#include <stdlib.h>
#include "compare_int.h"
#include "quicksort.h"
#define SIZE 1000
/*void swap(void** a,void** b){
  void* temp;
  temp = *a;
  *a = *b;
  *b = *a;
}*/
int main(){
  srand(time(0));
  int i;
  int** arr = calloc(sizeof(int*),SIZE);
  for( i = 0; i < SIZE; i++){
    int* n = malloc(sizeof(int));
    *n = rand()% 985;
    arr[i] = n;
  }
  for( i = 0; i < SIZE; i++){
    printf("element %4d at address %p is %4d\n",i,arr[i],*arr[i]);
  }
  printf("sorting......\n");
  quicksort(arr,SIZE,compare_int);
  for( i = 0; i < SIZE; i++){
    printf("element %4d at address %p is %4d\n",i,arr[i],*arr[i]);
  }
}