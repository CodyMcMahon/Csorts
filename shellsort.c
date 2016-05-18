void shellsort(void** arr, int size, int(*comp)(void*,void*)){
  int gap[] = {701,301,132,57,23,10,4,1};
  //int gap[] = {1,4,10,23,57,132,301,701};
  int gapsize = 8;
  int i;
  int o;
  int z;
  int y;
  for(i=0;i<gapsize;i++){
    for(o = 0; o < gap[i]; o++){
      for(z = o; z+gap[i]<size;z+=gap[i]){
        for(y = z; y >=o; y-=gap[i]){
          if(comp(arr[y],arr[y+gap[i]]) > 0){
            swap(&arr[y],&arr[y+gap[i]]);
          }
        }
      }
    }
  }
}