
#include<stdio.h>

int page_counter(int l , int c,int n,char ch[])
{

int i=0,j=0,k=0;
int tc=0,tl=1;
int page=1;
     
	for(i=0;ch[i]!=0;i++)
	{
		/**if(ch[i]!=' ')
		tc++;
		else
		tc++;*/
		
		for(j=k;j<c;j++)
		{
			tc++;
			k++;
			
		}
		
		if(tc>=c)
		{
			tc=0;
		    tl++;
	}
		
		if(tl>=l)
		{ 
		page++;
		tc=0;
		tl=0;
		
	}
}
return page+1;
		
	
}

int main()
{
	int n,l,c;
	int page;
	
	char ch[1000];
	
	
	scanf("%d %d %d " , &n,&l,&c);
	scanf("%s",ch);
	
	page=page_counter(l,c,n,ch);
	
	printf("%d",page);	
	
}
