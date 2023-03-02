#include <stdio.h>
#include <stdlib.h>


struct node
{
    /* data */
    int data;
    struct node *next;
};

typedef struct node single_node;

single_node *head = NULL;

void single_node_display();
void single_node_insert(int data);

typedef struct node cycle_node;

cycle_node *cycle_head = NULL;
cycle_node *cycle_current = NULL;

void cycle_node_display();
void cycle_node_insert(int data);

int main()
{
    single_node_insert(1);
    single_node_insert(2);
    single_node_insert(3);
    single_node_display();

    //cycle_node_insert(1);
    //cycle_node_insert(2);
    //cycle_node_insert(3);
    //cycle_node_insert(4);
    //cycle_node_display();
    return 0;
}

void single_node_display()
{
    single_node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

void single_node_insert(int data)
{
    single_node *link = malloc(sizeof(single_node));
    link->data = data;
    link->next = head;
    head = link;
}

void cycle_node_display()
{
    cycle_node *ptr = head;
    if (ptr==NULL){
        return;
    }
    while(ptr->next != head)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    printf("%d",ptr->data);
}

void cycle_node_insert(int data)
{
    cycle_node *link = malloc(sizeof(cycle_node));
    link->data = data;
    link->next = NULL;
    if(head==NULL)
    {
        head = link;
        head->next = link;
        return;
    }
    cycle_current = head;
    while(cycle_current->next != head){
        cycle_current = cycle_current->next;
    }
    cycle_current->next = link;
    link->next = head; 
}
