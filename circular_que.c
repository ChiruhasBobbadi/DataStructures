

#include,stdio.h>
#include,stdlib.h>

void enque()
{   int el;
	if(rear==front && rear==-1)
	{
		rear++;
		
	}
	if((rear+1)%5 == front)
	{
		printf("Que is full\n");
	}
	else
	{
		printf("Enter element\n");
		scanf("%d",&el);
		que[rear] = el;
		rear = (rear+1)%n;
	} 
}

void deque()
{
	if(front==-1)
	printf("Que is empty\n");
	else
	{
		printf("%d deleted from que\n",que[front]);
		
}

void display()
{
}

int que[5];
int rear=-1,front=-1;
int item;

int main()
{ int ch;
	while(1)

{	printf("1 for enque\n2 for deque\n3for display\n4 for exit");
    scanf("%d",&ch);
    switch(ch)
    {
		case 1:
		enque();
		break;
		case 2:
		deque();
		break;
		case 3 :
		display();
		break;
		
		default :
		printf("Wrong choice");
	}
}
return 0;
}
	
