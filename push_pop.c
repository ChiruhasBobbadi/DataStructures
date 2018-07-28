

#include<stdio.h>
int a[100],top=-1,n,i;
void push();
void display();
void pop();
int main()
{
	
    int ch;
	printf("Enter Size\n ");
	scanf("%d",&n);
	x : printf("1 for pushing\n2 for poping\n3 for printing\n4 to exit\n");
	
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 :
		
		push();
		goto x;
		
		break;
		case 2 :
		pop();
		
		goto x;
		break;
		
        case 3:
        display();
        goto x;
        break;
        case 4 :
        goto z;
        break;
        
        default:
        printf("Wrong input \n\n");
        printf("Please try again\n");
        goto x;
        break;
        
	}
	z : return 0;
}

 void push()
{
	int el;
	printf("Enter Push element:\n\n");
	
	scanf("%d",&el);
	
	if((top+1)==n)
	{
		printf("Stack Full Can't push\n\n");
	 }
	 else
	 {
		a[top+1] = el;
		top++;
	}
}

void display()
{
	if(top==-1)
	printf("Stack is empty please push some values first !\n\n");
	for(i=top;i>=0;i--)
	printf("%d\t",a[i]);
	printf("\n");
	printf("\n");
}

void pop()
{
	
	if(top==-1)
	{
		printf("can't pop stack is empty\n\n");
	}
	else
	{
     	printf("%d",a[top]);
	
	  printf("Popped sucessfully\n\n");
	
	top--;
    }
}


		
	
