#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int a,b,top;
	float ans=0;
	int i=0;
	
	char s[50];

	int stk[50];
	
int pop();
void push(int el);
//int digit(char el);



int main()
{  int x;
	top=-1;
	printf("Enter postfix expression");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(isdigit((int)s[i]))
		{ x = s[i]-'0';
		push(x);}
		else
		{
			a=pop();
			b=pop();
			switch(s[i])
			{
				case '+' :
				ans = b+a;
				push(ans);
				break;
				case '-' :
				ans = b-a;
				push(ans);
				break;
				
				case '*' :
				ans = b*a;
				push(ans);
				break;
				case '/' :
				ans = b/a;
				push(ans);
				break;
		}
	}
}
    printf("Expression value is %d",(pop()));
	return 0;
}
int pop()
{ int ch;
	if(top==-1)
	{
		printf("Can't operate");
		exit(0);
	}
	else
	{
		ch = stk[top];
		printf("\n%d popped",ch);
		top--;
	}
	return ch;
}
void push(int el)
{
	stk[top+1] = el;
	printf("\n %d is pushed",el);
	top++;
}
/**
int digit(char el)
{  int ch=0;
	if(el=='+'||el=='-'|| el=='*'||el=='/')
	ch=0;
	else
	ch=1;
	return ch;
}
*/
