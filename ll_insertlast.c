

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *header=NULL;

int el;
void insert()
{
	struct node *temp,*ptr=header;
	printf("Enter element\n");
	scanf("%d",&el);
	temp = (struct node *)malloc(sizeof(struct node));
	if(header==NULL)
	{
	header = temp;
	temp->data = el;
	temp->link=NULL;
}
	
	else
	{  
		while(ptr->link!=NULL)
		
		{
			ptr= ptr->link;
		}
		temp->data = el;
		ptr->link = temp;
		
	}
}

/**
void display()
{
	struct node *temp;
	temp = header;
	if(header==NULL)
	printf("List is empty\n");
	else
	{
		while(temp->link!=NULL)
	{
		printf("Element is %d \n",temp->data);
		temp = temp->link;
	}
	printf("Element is %d \n",temp->data);
}
}
* */

void display()

{struct node *temp;
	int i=1;
	temp = header;
	if(header==NULL)
	printf("List is empty\n");
	
	else
	{
		printf("S/No\t\tInfo\t\tAddress\t\tLink\n");
	            	
		while(temp!=NULL)
		{
			printf("\n%d\t\t%d\t\t%d\t\t%d\n",i,temp->data,temp,temp->link);
			temp = temp->link;
		}
		//printf("\n%d\t\t%d\t\t%d\t\t%d\n",i,temp->data,temp,temp->link);
	}
}
			
	
int main()
{
	int ch;
	while(1)
	{
		printf("1 for insertion at the end\n2 for display\n3 to exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			insert();
			break;
			case 2:
			display();
			break;
			case 3 :
			exit(0);
			break;
			default :
			printf("Wrong choice\n");
		}
	}
	return 0;
}

