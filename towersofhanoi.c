
#include<stdio.h>


	int hanoi(int , char , char,char);
int main()
{
	int n;

	printf("Enter the no.of disk's");
	scanf("%d",&n);
	hanoi(n,'a','b','c');
}

int hanoi(int n,char a, char b, char c)
{
	while (n!=0)
	{
		hanoi(n-1,a,c,b);
		printf("Moving disk %d from %c to %c \n",n,a,c);
		hanoi(n-1,b,a,c);
		break;
	}
	return 0;
}
