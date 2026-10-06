#include <stdio.h>
#define SIZE 5

int items[SIZE], rear = -1, front = -1;

void enQueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("\nqueue is full\n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\ninserted=%d", value);
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nqueue is empty");
    }
    else
        printf("\ndeleted=%d", items[front]);
    front++;
    if (front > rear)
    {
        front = rear - 1;
    }
}

void display()
{
    if (rear == -1)
        printf("\nqueue is empty");
    else
        printf("\nelements in queue are:");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", items[i]);
    }
}

int main()
{

    deQueue();

    enQueue(1);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    enQueue(8);

    display();

    deQueue();
    display();

    return 0;
}
