#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data);
void display();

int main()
{
    insert(1);
    insert(2);
    insert(3);
    display();
}

void insert(int data)
{
    // init link
    struct node *link;
    link = malloc(sizeof(struct node));
    
    link->data = data;
    if (head == NULL)
    {
        head = link;
        return;
    }
    
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = link;
    
    
    // link->data = data;
    // link->next = head;
    // head = link;
}

void display()
{
    while (head != NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}