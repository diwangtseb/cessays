#include <stdio.h>
#include <stdlib.h>

struct doubly_linked
{
    /* data */
    int data;
    struct doubly_linked *pre;
    struct doubly_linked *next;
};

struct doubly_linked *head = NULL;
struct doubly_linked *current = NULL;

void display();
void push(int data);

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    return 0;
}

void display()
{
    struct doubly_linked *ptr = head;
    if (ptr == NULL)
    {
        return;
    }
    while (ptr->next != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("%d \n", ptr->data);
}

void push(int data)
{
    struct doubly_linked *link = malloc(sizeof(struct doubly_linked));
    link->data = data;
    link->pre = NULL;
    link->next = NULL;
    if (head == NULL)
    {
        head = link;
        return;
    }
    current = head;
    while (current->next != NULL)
        current = current->next;
    current->next = link;
    link->pre = current;
}