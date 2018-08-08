#include<stdio.h>
#include<stdlib.h>
#define size 5

int front,rear;
front=-1;
rear=-1;
int q[size];


void enque()


{
	if(rear==size)
	{
		printf("Queue full ");
		exit(0);
	}
	else
	{
	
	   int el;
	printf("Enter element");
	scanf("%d",&el);
	if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		q[rear] = el;
	}
	else
	{
	q[rear+1] = el;
	rear++;
}
}
}

void deque()
{  if(front>rear)
	{
		printf("Que is empty\n");
		exit(0);
	}
	else
	{
	printf("%d dequed\n",q[front]);
	front++;
	
}
}

void display()
{
	
	if(front==-1 && rear==-1)
	printf("Que is empty\n");
	else
	{
	int i=0;
	for(i=front;i<=rear;i++)
	printf("%d\t",q[i]);
	
	printf("\n");
}
}


	
	




int main()
{
	int ch;
	
   x :printf("1. for enque\n2. for deque\n3. for display\n4. to exit\n\n");
   scanf("%d",&ch);
   switch(ch)
   {
	   case 1 : 
	   enque();
	   goto x;
	   break;
	   case 2 :
	   deque();
	   goto x;
	   break;
	   case 3 :
	   display();
	   goto x;
	   break;
	   case 4 :
	   exit(0);
	   break;
	   default:
	   printf("Wrong choice selected");
	   goto x;
		break;
	}
	return 0;
}
