
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


char stk[500];
char s[50];
int id=0;
int top=-1,i;
int idassign(char el);
char pop();
void push(char el);
char s[50];
int main()
{  char pp;
	int temp;
	int status;
	char actual_character;
	printf("Enter Expression");
	scanf("%s",s);
	x:for(i=0;s[i]!='\0';i++)
	{
		if(!isdigit((int)s[i]))
		{  actual_character=s[i];
		  if(s[i]=='('||s[i]=='[')
			push(s[i]);
			
			if(s[i]==')'||s[i]==']')
			{
			    
			    if(s[i]==')')
			    {     while(1)
			       {
				   
			          actual_character=pop();
			          if(actual_character=='[')
			           {
			               printf("Wrong Expression");
			               exit(0);
			           }
			           else if(actual_character=='(')
			           {  
					     break;
					   }
				}
					  
			    }
			    
			     if(s[i]==']')
			    { 
			           while(1)
					   {
					   actual_character=pop();
			                    
			           if(actual_character=='(')
			           {
			               printf("Wrong Expression");
			               exit(0);
			           }
			            else if(actual_character=='[')
			           {  
					      break;
					   }
			            
			       }
			    }
			
			
		}
		
	}
	}
	printf("Valid Expression");
	return 0;
}

char pop()
{ char ch;
	if(top==-1)
	{
		ch='n';
		exit(0);
	}
	else
	{
		ch = stk[top];
		//printf("\n%d popped",ch);
		top--;
	}
	return ch;
}
void push(char el)
{
	stk[top+1] = el;
	//printf("\n %c is pushed",el);
	top++;
}
			
		
