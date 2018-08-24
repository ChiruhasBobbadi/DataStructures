

#include<stdio.h>


int main()
{
	
int cnt=0;
int n,r;
scanf("%d%d",&r,&n);


if(!(n*26+n > r))
printf("Impossible");

else
{
if(n>r)
printf("0");
else
{
int rem;
rem = r-n-2;

x: if(rem<n)
cnt++;

else
{
	rem=rem-n;
	cnt++;
	goto x;
}

printf("%d",cnt);
}
}
return 0;
}
