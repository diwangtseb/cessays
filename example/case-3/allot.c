#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int length;
    scanf("%d", &length);
    printf("thanks your input %d\n", length);
    int *p;
    p = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        p[i] = i;
        p[i + 1] = i + 1;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", p[i + 1]);
    }

    printf("%d ", p[99]);
    free(p);
    return 0;
}
