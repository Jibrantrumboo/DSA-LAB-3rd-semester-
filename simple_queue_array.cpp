#include<stdio.h>
#define size 5

int queue[size];
int front=-1,rear=-1;
void enque(int a)
{
	printf("enque:- \n");
	if(front==-1)
	{
	front++;
	rear++;
		queue[front]=a;
		printf("\n enqueued %d\n",a);
	}
	else if(front!=-1)
	{
		rear++;
		queue[rear]=a;
			printf("\n enqueued %d\n",a);
	}
	else if(rear==size-1)
	{
		printf("queue full \n");
	}
}
void deque(){
	if(front==-1)
	{
		printf("queue empty");
		return;
	}
	printf("\ndeleted :- %d\n",queue[front]);
	front++;
	if(front>rear)
	{
		front=rear=-1;
	}
}
void isempty()
{
	if(front==-1)
	{
		printf("empty\n");
		}
		else{
			printf("not empty\n");
		}
}
void isfull()
{
	if(rear==size-1)
	{
	printf("full\n");
	
	}
	else
	{
		printf("not full\n");
	}
}
	void display()
{
    if (front == -1)
    {
        printf("Queue empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d  ", queue[i]);

    printf("\n");
}
int main()
{
	enque(10);
//	enque(20);
	printf("queue :- \n");
	display();
	printf("\n DEQUE\n");
	deque();
	isfull();
	isempty();	
}