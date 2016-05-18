void swap(void** a,void** b){
  void* temp;
  temp = *a;
  *a = *b;
  *b = temp;
}