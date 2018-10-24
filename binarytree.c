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
struct node *prev =NULL;
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


		

 struct node* findMax(struct node* t)
 {
	 if(t==NULL)
	 return NULL;
	 else
	 {
		 if(t->right==NULL)
		 return t;
		 else
		 findMax(t->right);
	 }
 }

	 struct node* findMin(struct node* t)
	 {
		 
		 if(t==NULL)
		 return NULL;
		 else
		 {
		 if(t->left==NULL)
		 return t;
		 else
		 findMin(t->left);
	 }
 }

void delete(int el)
{   int da;
	
	if(temp->data >el)
	{  prev=temp;
		temp=temp->left;
		printf("\ntemp=%d\nprev=%d\n\n",temp->data,prev->data);
		delete(el);
	}
	if(temp->data < el)
	{   prev=temp;
		temp=temp->right;
		printf("\ntemp=%d\nprev=%d\n\n",temp->data,prev->data);
		delete(el);
	}
	if(temp->data==el)
	{
			
				
				//for leaf node
			 if(temp->right==NULL && temp->left==NULL)
			 {
				 printf("%d deleted ",el);
				 
				 prev->right=NULL;
				 free(temp);
			 }
			 // for node with two subtrees
			 if(temp->right!=NULL && temp->left!=NULL)
			 {
				    da=findMax(temp->left)->data;
				    //delte(da);
				    printf("%d deleted ",temp->data);
				    printf("it is replaced with %d",da);
				    temp->data = da;
				    free(temp);
				    
		 }
		 
		 // for one subtree
		
			 
		 
	 
 }
}

	 
	 
 

 void display(struct node* t,int level)
                          {
                            int i;
                            struct node* p;
                             if(t)
                               {
                                          display(t->right,level+1);
                                          printf("\n");
                                          for(i=0;i<level;i++)
                                          printf("  ");
                                          printf(" %d",t->data);
                                          display ( t -> left , level+1 );
                                      }
                                   }
		 
				
				 
			 



int main()
{
	int ch;
	int el;
	int le;
	while(1)
	{
		printf("1 for insertion \n2 for display\n3 to delete \n4 for max and min element\n5 to exit\n");
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
			printf("\nEnter level\n");
			scanf("%d",&le);
			display(root,le);
			break;
			case 3:
			printf("Enter element to delete\n");
			scanf("%d",&el);
			delete(el);
			break;
			case 4:
			printf("minimum =%d\n",findMin(root)->data);
			printf("Maximum =%d\n",findMax(root)->data);
			break;
			case 5:
			exit(0);
			break;
		}
	}
		return 0;
	}
	
			
 
 
