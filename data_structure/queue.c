#include <stdio.h>

#define LEN 5

int items[LEN], front = -1, rear = -1;

void enter_queue(int item);
int go_out_queue();
void show_queue();

int main()
{
    enter_queue(1);
    enter_queue(2);
    enter_queue(3);
    enter_queue(4);
    enter_queue(5);
    show_queue();
    go_out_queue();
    show_queue();
    return 0;
}

void show_queue()
{
    if (rear == -1)
        return;
    else
    {
        int i;
        for (i = front; i <= rear; i++)
            printf("%d\n", items[i]);
    }
}

void enter_queue(int item)
{
    if (LEN - 1 == rear)
        return;
    if (front == -1)
        front = 0;
    rear++;
    items[rear] = item;
}

int go_out_queue()
{
    if (front == -1)
        return -1;
    front++;
    if (front > rear)
        return -1;
    return 0;
}
