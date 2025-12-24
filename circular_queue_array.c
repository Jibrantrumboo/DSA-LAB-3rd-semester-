#include <stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;


void enque(int a)
{
    
    if (front == (rear + 1) % size)
    {
        printf("Queue Full\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % size;
    queue[rear] = a;

    printf("Enqueued %d\n", a);
}


void deque()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Deleted %d\n", queue[front]);

  
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % size;
}

void isempty()
{
    if (front == -1)
        printf("Queue is Empty\n");
    else
        printf("Queue is NOT Empty\n");
}


void isfull()
{
    if (front == (rear + 1) % size)
        printf("Queue is Full\n");
    else
        printf("Queue is NOT Full\n");
}


void display()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}

int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);

    display();

    deque();
    deque();

    display();

    enque(60);
    enque(70);

    display();

    isfull();
    isempty();

    return 0;
}
