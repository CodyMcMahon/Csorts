int isNotOrder(void** arr, int size,int(*c)(void*,void*)){
  int i;
  for(i = 0; i < size - 1; i++){
    if (c(arr[i],arr[i+1])>=0){
      return 1;
    }
  }
  return 0;
}
void bogosort(void** arr, int size, int(*comp)(void*,void*)){
  int i;
  int one;
  int two;
  while(isNotOrder(arr,size,comp)){
    for(i = 0;i < 70;i++){
      one = rand() % size;
      two = rand() % size;
      if (one == two){
        continue;
      }
      swap(&arr[one],&arr[two]);
    }
  }
}