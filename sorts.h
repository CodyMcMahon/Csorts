#ifndef SORTS_H
#define SORTS_H
void quicksort(void** arr, int size, int(*comp)(void*,void*));
void bubblesort(void** arr, int size, int(*comp)(void*,void*));
void gnomesort(void** arr, int size, int(*comp)(void*,void*));
void selectionsort(void** arr, int size, int(*comp)(void*,void*));
void shellsort(void** arr, int size, int(*comp)(void*,void*));
void insertionsort(void** arr, int size, int(*comp)(void*,void*));
void heapsort(void** arr, int size, int(*comp)(void*,void*));
void mergesort(void** arr, int size, int(*comp)(void*,void*));
void bogosort(void** arr, int size, int(*comp)(void*,void*));
void worstsort(void** arr, int size, int(*comp)(void*,void*));
void swap(void** a,void** b);
#endif