#include <stdio.h>

void swap(int *a, int *b);

void bubble_sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int size = 5;
    int arr[5] = {1, 4, 2, 3, 5};
    bubble_sort(arr, size);
    for(int i=0;i<size;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}