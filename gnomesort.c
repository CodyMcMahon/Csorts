void gnomesort(void** arr, int size, int(*comp)(void*,void*)){
  int pos;
  for(pos = 0;pos < size;){
    //if(pos = 0
    if(pos == 0 || comp(arr[pos-1],arr[pos]) <= 0){
      pos++;
    }
    else{
      swap(&arr[pos-1],&arr[pos]);
      pos--;
    }
  }
  
}