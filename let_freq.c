
#include<stdio.h>
#include<string.h>
char c[200];
int cnt[100];
	char checked[26];
int exists(char el)
{int res=0;
	int i;
	for(i=0;checked[i]!='\0';i++)
	{
		if((el==checked[i]))
		res=1;
		else
		continue;
	}
	
	return res;
}

void sort()
{
	char temp;
	int i=0,j=0;
	for(i=0;checked[i]!='\0';i++)
	{
		for(j=i+1;checked[j]!='\0';j++)
		{
			if(checked[j]<checked[i])
			{
				temp=checked[j];
				checked[j] = checked[i];
				checked[i] = temp;
			}
		}
	}
}

int  indexOf(char el)
{ int index=-1;
	int i=0;
	for(i=0;checked[i]!='\0';i++)
	{
		if(el==checked[i])
		index=i;
		}
		
		return index;
	}
	
	void display()
	{int i;
		int big=0;
		int index;
		for(i=0;checked[i]!='\0';i++)
		{
			
			if(cnt[i]>big)
			{
			big=cnt[i];
			index=i;
		}
		}
		
		if(big==0)
		for(i=0;checked[i]!='\0';i++)
		printf("\t%c",checked[i]);
		
		else
		{
		   printf("%c",checked[index]);
	   }
		
		
		
		
		
		
	}
		
int main()
{    int i=0,index=0;
	int j=0;
	char temp;
	char c[200];
	
	scanf("%s",c);

	for(i=0;c[i]!='\0';i++)
	{   
		if(exists(c[i]))
		continue;
		else
		{
		temp = c[i];
		checked[j] =temp;
		sort();
		j++;
	}
	    index = indexOf(c[i]);
		for(j=i+1;c[j]!='\0';j++)
		{  
			if(temp==c[j])
			{
			
			cnt[index]++;
		}
			
		}
		
		
		
	}
	display();
		return 0;
	}
			
			
			
              
