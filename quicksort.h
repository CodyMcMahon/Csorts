#ifndef QUICK_SORT_H
#define QUICK_SORT_H
void quicksort(void* arr, int size, int(*comp)(void*,void*));
void swap(void** a,void** b);
#endif