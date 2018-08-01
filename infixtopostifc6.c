/** this code is written by chiruhas*/
#include<stdio.h>
#include<stdlib.h>
char stk[50];
char ex[50];
int i,id,j,cid;
char res[50];
int top=-1;
int idassign(char x)
{
  if(x=='*' || x == '/')
  return 1;
  else
  if(x =='+' || x =='-')
  return 0;
   else if(x=='(' || x==')')
   return -2;
   else
    return -1;
  }
  
  void push(char el)
  {
    top++;
    stk[top] = el;
  }
  
  char pop()
 { 
	 char ch;
    if(top==-1)
    {
    printf("Can't pop stack is empty");
   exit(0);
     }
    else
    {
     ch= stk[top];
     top--;
     }
 return ch;
}
 
  
  
  int currentid()
  {  if(top==-1)
	  return -2;
	  else
	  {
	   if(stk[top]=='*' || stk[top] == '/')
     return 1;
      else
     if(stk[top] =='+' || stk[top] =='-')
     return 0;
    else if(stk[top] == '(' || stk[top]==')')
    return -1;
    else
    return -3;
     }
}

int main()
{
  printf("Enter expression\n");
  
  scanf("%s",ex);
   j=0;
   for(i=0;ex[i]!='\0';i++)
   {
        id=idassign(ex[i]);
         if(id==-1)
         { // adding non characters into stack a.k.a numbers
         res[j] = ex[i];
         printf("%c added to result\n",res[j]);
         j++;
         }
         else
         { cid = currentid();
			 
			 if(ex[i]=='(')
			 { // pushing '(' into stack
				 printf("( is pushed\n");
				 push(ex[i]);
			 }
					 
		       else if(ex[i]==')')
		       {    // checking for ')' to encounter
				   printf (") is encountered popping elements until ( is found\n");
				    char c;
				   z: c = pop();
				      printf(" %c is popped \n", c);
				    if(c!='(')
				    {   
						res[j] = c;
						j++;
						goto z;
					}
					
			   }
				 
			 else
			 {  
		        if(cid>id)
		       {// checking for precedence to decide wether the char need to be pushed or popped
				   
				   char temp;
				   temp = pop();
				   if(temp!='(' && temp!=')')
				   {
			      res[j] = temp;;
			     printf("%c added to result\n",res[j]);
			    j++;
			    push(ex[i]);
		         }
			   
			    
		       }
		       
		        else if(cid <id)
			   { // checking for precedence to decide wether the char need to be pushed or popped
				   
				   printf("%c is pushed\n",ex[i]);
			   push(ex[i]);
		       }
		       
		       else if(cid==id)
		       {   printf("%c is popped and %c is pushed\n ",stk[top],ex[i]);

				    char temp;
				   temp = pop();
				   if(temp!='(' && temp!=')')
				   {
			      res[j] = temp;;
			     printf("%c added to result\n",res[j]);
			    j++;
			    push(ex[i]);
		         }
				   
			   }
			   
		   
			   
			  
	           }
	  }
  }
    for(i=top;i>=0;i--)
    {
		           char temp;
				   temp = pop();
				   if(temp!='(' && temp!=')')
				   {
			      res[j] = temp;;
			    
			       j++;
			  
		         }
	}
  
  printf("Final postfix expression is :");
  
  puts(res);
          
 return 0;
}
