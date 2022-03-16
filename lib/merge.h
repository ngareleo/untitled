//
// Created by user on 3/16/2022.
//
#include <stdio.h>
#include <stdlib.h>

void heapify(int*, int, int);
void swap(int*, int*);
void build_heap(int*, int);
void print_array(int*, int);

void heapify(int *arr, int idx, int max){
    int l, r, large;
    l = idx * 2 + 1;
    r = idx * 2 + 2;
    large = idx;
    if (r < max && *(arr+large) < *(arr+r))
        large = r;

    if (l < max && *(arr+large) < *(arr+l))
        large = l;

    if (large != idx){
        swap((arr+large), (arr+idx));
        // confirm
        heapify(arr, large, max);
    }
}

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void build_heap(int *arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, i, n);
    }
}
void heap_sort(int *arr, int _n)
{
    build_heap(arr, _n);
    for(int i = _n - 1; i >= 0; i-- ){
        swap(arr, (arr+i));
        build_heap(arr, i);
        print_array(arr, _n);
    }
}

void print_array(int *arr, int max) {
    for(int i = 0; i < max; i++)
        printf("%d%c", *(arr+i), (i == max - 1)? '\n' : ' ');
}