#include<stdio.h>
#define HELLO_NAME "Hello"
#define WORLD_NAME  "World"

void hello_world(){
    printf("%s,%s\n",HELLO_NAME,WORLD_NAME); 
    printf("%s",HELLO_NAME);
    char f[7] ="asdsad";
    printf("%s",f);
    char temp;
    scanf("%s",&temp);
    printf("%s",&temp);
}



int main()
{
    /* code */
    hello_world();
    return 0;
}
