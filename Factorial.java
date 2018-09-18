import java.util.Scanner;

class Factorial
{
public static void main(String args[])
{
 System.out.println("Enter number");
int n = new Scanner(System.in).nextInt();
 
try
{fact(n);
}
catch (Exception e)
{
System.out.println(e);
}
}

static void fact(int n)
{
  if(n<0)
   throw new IllegalArgumentException("Value of x must be positive");
else if(n>=20)
throw new IllegalArgumentException("Result will overflow");
else
{
int fact =1;
  for(int i=1;i<=n;i++)
  fact = fact*i;
  System.out.println("Factorial = "+fact);
}
}
}
