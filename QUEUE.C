#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int front=-1,rear=-1,i;
int queue[MAX_SIZE];
int isempty()
{
return(front==-1&&rear==-1);
}
int isfull()
{
return((rear+1)%MAX_SIZE==front);
}
void enqueue(int data)
{
if(isfull())
{
printf("queue is full-overflow cannot enqueue.\n");
return;
}
if(isempty())
{
front=rear=0;
}
else
{
rear=(rear+1)% MAX_SIZE;
}
queue[rear]=data;
printf("%d added to the queue.\n",data);
}
void dequeue()
{
if(isempty())
{
printf("queue is underflow cannot dequeue.\n");
return;
}
printf("%d removed from the queue\n",queue[front]);
if(front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%MAX_SIZE;
}
}
int search(int key)
{
if(isempty())
{
printf("queue is empty,cannot search.\n");
return-1;
}
i=front;
do{
if(queue[i]==key)
{
printf("%d found at position %d in the queue.\n",key,i);
return i;
}
i=(i+1)%MAX_SIZE;
}
while(i!=(rear+1)%MAX_SIZE);
printf("%d not found in the queue.\n",key );
return-1;
}
void display()
{
if(isempty())
{
printf("Queue is empty.\n\t");
return;
}
printf("circular queue;");
i=front;
do{
printf("%d  ",queue[i]);
i=(i+1)%MAX_SIZE;
}
while(i!=(rear+1)%MAX_SIZE);
printf("\n");
}
int main()
{
int choice,data,key;
while(1)
{
printf("\n circular queue operation;\n");
printf("1.Add(enqueue)\n ");
printf("2.Delete(dequeue)\n");
printf("3.search\n");
printf("4.display\n ");
printf("5.exit\n ");
printf("enter your choice;");
scanf("\%d",&choice);
switch (choice)
{
case 1:
printf("enter the element to add:");
scanf("%d",&data);
enqueue(data);
break;
case 2:
dequeue();
break;
case 3:
printf("enter the element to search");
scanf("%d",&key);
search(key);
break;
case 4:
display();
break;
case 5:
exit(0);
default:
printf("invalid choice please try again.\n");
}
}
return 0;
}
