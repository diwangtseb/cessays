#include <stdio.h>

int size = 0;
void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void insert(int arr[], int num);
void deleteRoot(int arr[], int num);
void printArr(int arr[], int size);

int main()
{
    int arr[5];
    insert(arr, 1);
    insert(arr, 2);
    insert(arr, 3);
    insert(arr, 4);
    insert(arr, 5);
    printArr(arr, size);
    deleteRoot(arr, 1);
    printArr(arr, size);
    return 0;
}

void swap(int *a, int *b)
{
    printf("a %d,b %d \n", *a, *b);
    int temp = *b;
    *b = *a;
    *a = temp;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heapify(int arr[], int size, int i)
{
    if (size == 1)
    {
        printf("single elem");
    }
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && arr[left] > arr[largest])
        largest = left;
    if (right < size && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, size, largest);
    }
}

void insert(int arr[], int num)
{
    if (size == 0)
    {
        arr[0] = num;
        size += 1;
    }
    else
    {
        arr[size] = num;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(arr, size, i);
        }
    }
}

void deleteRoot(int arr[], int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == arr[i])
            break;
    }
    swap(&arr[i], &arr[size - 1]);
    size -= 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
}
