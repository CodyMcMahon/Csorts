#define ip(i) (i-1)/2
#define ilc(i) 2*i+1
#define irc(i) 2*i+2
void siftdown(void** a,int l,int h,int(*c)(void*,void*)){
  int root = l;
  int s;
  int child;
  while(ilc(root) <= h){
    child = ilc(root);
    s = root;
    if(c(a[s],a[child])<0){
      s = child;
    }
    if(child+1 <= h && c(a[s],a[child+1]) < 0){
      s = child+1;
    }
    if(s == root){
      return;
    }
    else{
      swap(&a[root], &a[s]);
      root = s;
    }
  }
}

void mkheap(void** arr,int size,int(*comp)(void*,void*)){
  int start;
  for(start = ip(size-1);start >=0;start--){
    siftdown(arr,start,size-1,comp);
  }
}

void heapsort(void** arr, int size, int(*comp)(void*,void*)){
  mkheap(arr,size,comp);
  int end = size-1;
  while(end>0){
    swap(&arr[end],&arr[0]);
    end--;
    siftdown(arr,0,end,comp);
  }
}