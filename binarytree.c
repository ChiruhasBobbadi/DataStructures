

#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node* left;
struct node* right;
int data;
};

struct node *root=NULL;
struct node *temp =NULL;
void insert(int data)
{
	struct node*t;
	
if(root==NULL)
{
 root=(struct node*)malloc(sizeof(struct node*));
 root->data=data;
 root->right=NULL;
 root->left=NULL;
 printf("%d inserted as root\n",root->data);
 temp=root;
}
 
 else 
 {
	 if(data>temp->data)
	 {
		 if(temp->right==NULL)
		 {
	t=(struct node*)malloc(sizeof(struct node*));
   t->data=data;
   t->left=NULL;
   t->right=NULL;
   temp->right=t;
	printf("%d inserted right of %d\n",data,temp->data);
	temp=root;
		}
		else
		{
			temp=temp->right;
			insert(data);
		}
	}
	
	else if(data<temp->data)
	{
		if(temp->left==NULL)
		{
			t=(struct node*)malloc(sizeof(struct node*));
			t->left=NULL;
			t->right=NULL;
			t->data=data;
	temp->left=t;
	printf("%d inserted left of %d\n",data,temp->data);
	temp=root;
		}
	else
	{
		temp=temp->left;
		insert(data);
	}

	
}
}
}
/**
void print_tree(struct tree *r,int l)
{
	int i;
	if(!r) return ;
	print_tree(r->right,l+1);
	for(i=0;i<l;++i)
		printf(" ");
	printf("%c \n",r->info);
	print_tree(r->left,l+1);


}
* */

void delete(int el)
{
	struct node *prev =NULL;
	
	
	if(temp->data >el)
	{  prev=temp;
		temp=temp->left;
		delete(el);
	}
	if(temp->data < el)
	{   prev=temp;
		temp=temp->right;
		delete(el);
	}
	if(temp->data==el)
	{
		
			 if(temp->right==NULL && temp->left==NULL)
			 {
				 printf("%d deleted , which is attached to of %d",el,temp->data);
				 prev->right=NULL;
			 }
		 }
	 }
				
				 
			 



int main()
{
	int ch;
	int el;
	while(1)
	{
		printf("1 for insertion \n2 for display\n 3 to exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("enter element\n");
			scanf("%d",&el);
			insert(el);
			break;
			case 2:
			//printf("coming soon..\n");
			//print_tree(root,0);
			break;
			case 3:
			exit(0);
			break;
		}}
		return 0;
		}
			
 
 
