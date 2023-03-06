#include <stdio.h>
#include <stdlib.h>

int *two_sum(int target, int *arr, int size, int *ret_size);

int main()
{
    int arr[] = {2, 4};
    int targe = 6;
    int *ptr = (int *)malloc(sizeof(int));
    int *ret = two_sum(targe, arr, 2, ptr);
    printf("%d %d \n", arr[0], arr[1]);
}

int *two_sum(int target, int *arr, int size, int *ret_size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        for (int j = i + 1; i < size; j++)
        {
            if (arr[j] + arr[i] == target)
            {
                int *ret = (int *)malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                *ret_size = 2;
                return ret;
            }
        }
    }
    return NULL;
}