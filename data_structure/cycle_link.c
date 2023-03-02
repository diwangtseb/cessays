#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *current = NULL;

void insert(int item);
void display();

int main()
{
    insert(1);
    insert(2);
    display();
    return 0;
}

void insert(int data)
{
    struct Node *link = (struct Node *)malloc(sizeof(struct Node));
    link->data = data;
    link->next = NULL;
    if (head == NULL)
    {
        head = link;
        head->next = link;
        return;
    }
    current = head;
    while (current->next != head)
        current = current->next;
    current->next = link;
    link->next = head;
}

void display()
{
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}