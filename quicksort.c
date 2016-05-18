
//Lomuto partition scheme
int part(void** a, int l,int h, int(*c)(void*,void*)){
  
  void* p = a[h];
  int i = l;
  int j = l;
  while(j < h){
    if(c(a[j], p) < 0 ){
      swap(&a[i],&a[j]);
      i++;
    }
    j++;
  }
  
  if(i<h)
  swap(&a[i],&a[h]);
  return i;
}

void qs(void** a, int l,int h, int(*c)(void*,void*)){
  if (l >= h)
    return;
  int p = part(a,l,h,c);
  qs(a,l,p - 1,c);
  qs(a,p+1,h,c);
}

void quicksort(void** arr, int size, int(*comp)(void*,void*)){
  qs(arr,0,size-1,comp);
}
