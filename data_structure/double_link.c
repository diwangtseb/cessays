#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *later;
};

struct node *head = NULL;
struct node *current = NULL;

void insert(int data)
{
    struct node *link = malloc(sizeof(struct node));
    link->data = data;
    link->pre = NULL;
    link->later = NULL;
    if (head == NULL)
    {
        head = link;
        return;
    }
    current = head;
    while (current->later != NULL)
        current = current->later;
    current->later = link;
    link->pre = current;
}

void display()
{
    struct node *ptr = head;
    printf("n[head] <=>");
    while (ptr->later != NULL)
    {
        printf(" %d <=>", ptr->data);
        ptr = ptr->later;
    }

    printf(" %d <=>", ptr->data);
    printf(" [head]n");
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();
    return 0;
}