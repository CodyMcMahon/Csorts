void selectionsort(void** arr, int size, int(*comp)(void*,void*)){
  int i,o;
  int min;
  for(i = 0;i < size - 1;i++){
    min = i;
    for(o = i+1; o < size; o++){
      if(comp(arr[min],arr[o])>0){
        min = o;
      }
    }
    if(min != i){
      swap(&arr[i],&arr[min]);
    }
  }
}