#include <stdio.h>

int size = 0;
void swap(int *a, int *b);
void insert_max(int arr[], int elem);
void insert_min(int arr[], int elem);
void printArr(int arr[]);
void heapify_max(int arr[], int size, int index);
void heapify_min(int arr[], int size, int index);
void del_root_max(int arr[], int elem);
void del_root_min(int arr[], int elem);

// int main()
// {
//     int arr[10];
//     insert(arr, 1);
//     insert(arr, 2);
//     insert(arr, 3);
//     insert(arr, 4);
//     insert(arr, 5);
//     printArr(arr);
//     delRoot(arr, 3);
//     printArr(arr);
//     return 0;
// }

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void insert_max(int arr[], int elem)
{
    if (size == 0)
    {
        arr[size] = elem;
        size += 1;
        return;
    }
    arr[size] = elem;
    size += 1;
    int half = size / 2 - 1;
    for (int i = half; i >= 0; i--)
    {
        /* code */
        heapify_max(arr, size, i);
    }
}
void insert_min(int arr[], int elem)
{
    if (size == 0)
    {
        arr[size] = elem;
        size += 1;
        return;
    }
    arr[size] = elem;
    size += 1;
    int half = size / 2 - 1;
    for (int i = half; i >= 0; i--)
    {
        /* code */
        heapify_min(arr, size, i);
    }
}

void printArr(int arr[])
{
    for (int i = 0; i < size; ++i)
    {
        /* code */
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heapify_max(int arr[], int size, int index)
{
    if (size == 0)
        return;
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < size && arr[left] > arr[largest])
        largest = left;
    if (right < size && arr[right] > arr[largest])
        largest = right;
    if (largest != index)
    {
        swap(&arr[index], &arr[largest]);
        heapify_max(arr, size, largest);
    }
}

void heapify_min(int arr[], int size, int index)
{
    if (size == 0)
        return;
    int minimum = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < size && arr[left] < arr[minimum])
        minimum = left;
    if (right < size && arr[right] < arr[minimum])
        minimum = right;
    if (minimum != index)
    {
        swap(&arr[index], &arr[minimum]);
        heapify_min(arr, size, minimum);
    }
}

void del_root_max(int arr[], int elem)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
            break;
    }
    swap(&arr[i], &arr[size - 1]);
    size -= 1;
    for (i = size / 2 - 1; i >= 0; i--)
    {
        heapify_max(arr, size, i);
    }
}

void del_root_min(int arr[], int elem)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
            break;
    }
    swap(&arr[i], &arr[size - 1]);
    size -= 1;
    for (i = size / 2 - 1; i >= 0; i--)
    {
        heapify_min(arr, size, i);
    }
}