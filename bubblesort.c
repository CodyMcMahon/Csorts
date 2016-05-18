void bubblesort(void** arr, int size, int(*comp)(void*,void*)){
  int i,o;
  for(i=0; i<size-1;i++){
    for(o=0; o<size-(i+1);o++){
      if(comp(arr[o],arr[o+1]) > 0)
        swap(&arr[o],&arr[o+1]);
    }
  }
}