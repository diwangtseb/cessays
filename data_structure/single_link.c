#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *HEAD = NULL;
void insert(int data);
void display();

int main()
{
    insert(10);
    insert(20);
    display();
}
// head[data,addr]->next[data,addr]
// head[10,*ptr]-> next[20,*ptr]
void insert(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;
    link->next = HEAD;
    HEAD = link;
}

void display()
{
    struct node *ptr = HEAD;
    while (ptr != NULL)
    {
        /* code */
        printf("head[%d,%p]\n", ptr->data, &ptr->next);
        ptr = ptr->next;
    }
    printf("over \n");
}