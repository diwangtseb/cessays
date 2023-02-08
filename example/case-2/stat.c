#include <stdio.h>
#include <string.h>
int local_stats();
int stats();

int main(int argc, char const *argv[])
{
    /* code */
    stats();
    return 0;
}

int stats()
{
    int count = 0;
    while (getchar() != EOF)
    {
        /* code */
        count++;
    }
    printf("%s,%d\n","exit",count);
    return count;
}

int local_stats()
{
    char str[] = "1112";
    unsigned int lenStr = strlen(str);
    printf("%d\n", lenStr);
    printf("%lu", sizeof(lenStr));
    return lenStr;
}
