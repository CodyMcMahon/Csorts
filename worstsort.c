/*
  this is too bad I don't even want to make it
*/
typedef struct NODE_STRUCT{
    void* data;
    struct NODE_STRUCT** nexts;
    int nextsSIZE;
} *node;

int isInOrder(void** arr, int size,int(*c)(void*,void*)){
  int i;
  for(i = 0; i < size - 1; i++){
    if (c(arr[i],arr[i+1])>=0){
      return 0;
    }
  }
  return 1;
}

node getALL(void** arr, int data, int size){
    node root = malloc(sizeof(node));
  if(size){
    int i,i2,i3;
    root->data = data;
    root->nexts = calloc(sizeof(node),size);
    root.nextsSIZE = size-1;
    for(i = 0;i < size;i++){
      void** temparray = calloc(sizeof(node),size - 1);
      i3 = 0;
      for(i2 = 0;i2 < size;i2++){
        if(i2 == i)
          continue;
        temparray[i3]=arr[i2];
      }
      root->nexts[i] = getALL(temparray,arr[i],size-1);
    }
  }
  else{
    node root = malloc(sizeof(node));
    root->data = data;
    root->nexts = 0;
  }
  return root;
}
void checkALL(root,arr,size,comp){
  int i;
  node* placeChecker = calloc(sizeof(node),size);
  int* indexchecker = calloc(sizeof(int),size);
  for(i=0;i<size;i++){
    placechecker[i] == root->nexts[0];
    arr[i] = placechecker[i]->data;
  }
  i = size-1;
  while(1){
    if(isInOrder(arr,size,comp)){
      return;
    }
    if(indexchecker[i] < placeChecker[i].nextsSIZE){
      arr[i] = placeChecker[i]->nexts
    }
  }
  
}

void worstsort(void** arr, int size, int(*comp)(void*,void*)){
  node root = getALL(arr,0,size);
  checkALL(root,arr,size,comp);
}