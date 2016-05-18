void mergesort(void** arr, int size, int(*comp)(void*,void*)){
  arrtemp** = malloc(sizeof(void**),size);
  split(arr,arrtemp,0,n,comp);
}

void split(void** arr,void** arrtemp, int l,int h,int(*c)(void*,void*)){
  int m;
  if(h-l < 2)
    return;
  m = (h + l) / 2;
  split(arr,arrtemp,l,m,c);
  split(arr,arrtemp,m,h,c);
  merge(arr,l,m,h,c);
  cpy(arr,arrtemp,l,h);
}

void merge(void** arr,void** arrtemp, int l,int m,int h,int(*c)(void*,void*)){
  int i = l;
  int j = m;
  int k = 0;
  for(k = l; k < h; k++){
    if(i < m && (j >= h || c(arr[i],arr[j]) <= 0)) {
      arrtemp[k] = arr[i];
      i++;
    }
    else{
      arrtemp[k] = arr[j];
      j++;
    }
    
    
  }
  
}
void cpy(void** arr,void** arrtemp,int l,int h){
  int k;
  for(k = l;k<h;k++){
    arr[k] = arrtemp[k];
    
  }
}