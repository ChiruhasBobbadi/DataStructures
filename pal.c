
#include<stdio.h>
#include<stdlib.h>
 
 int isPalindrome(int el)
       {
          int temp;
          int r;
          temp=el;
          int sum=0;
          while(temp!=0)
          {
          r = temp%10;
          sum = sum*10+r;
          temp/=10;
          }
          
          if(sum==el)
          return 1;
          else
          return 0;
          }
          
int main()
{
int i,j;	
 int n,el;
  //int *a;
 scanf("%d",&n);
// a = (int *)calloc(n,sizeof(int));
long int a[1000000];
 for(i=0;i<n;i++)
scanf("%ld",&a[i]);

 for(i=0;i<n;i++)
 {
      el = a[i];
   for(j=el+1;j<100000;j++)
   {
       if((isPalindrome(j)))
       {
       printf("%d\n",j);
       break;
       }
       }
       }
       
       return 0;
       }
       
      
  
