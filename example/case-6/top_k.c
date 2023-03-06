#include <stdio.h>
#include "max_heap.h"

int k = 2;
int *k_arr;
int *create_arr(int len);
void create_k_heap(int arr[]);

int main()
{
    k_arr = create_arr(100);
    printf("%d \n", k_arr[99]);
    int arr[k];
    create_k_heap(arr);
    printf("%d \n", arr[0]);
    for (int i = k; i < 100; i++)
    {
        /* code */
        int heap_min_elem = arr[0];
        if (heap_min_elem >= k_arr[i])
            continue;
        del_root_min(arr, heap_min_elem);
        insert_min(arr, k_arr[i]);
    }

    printf("%d  %d \n", arr[0], arr[1]);
}

void create_k_heap(int arr[])
{
    for (int i = 0; i < k; i++)
    {
        insert_min(arr, k_arr[i]);
    }
}

int *create_arr(int len)
{
    static int r[] = {};
    for (int i = 0; i < len; i++)
    {
        /* code */
        r[i] = i;
    }
    return r;
}