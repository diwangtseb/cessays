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
    free(p);
    return 0;
}
