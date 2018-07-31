
import java.util.*;
class BankAccount
{

String name;
double balance;

BankAccount()
{
System.out.println("Testing default Constructor");
}
BankAccount(String name)
{
this.name = name;
}

BankAccount(String name , double balance)
{
 this.name = name;

this.balance = balance;
if(balance<0){
 balance = 0.0;
System.out.println("Attempting to create account with negative value, should default to $0.00...");
}
else
{
  System.out.println("Creating account with initial valid value "+balance"...");
}
}

public void getBalance()
{
 System.out.println(name+"'s Current Balance is :$"+balance);
}

public void deposit(double d)
{ System.out.println("Testing Deposit method....Depositing $"+d);
  if(d<0)
 System.out.println("Cannot deposit a negative amount...");
 else
 balance = balance+d;

System.out.println(name+"'s Current Balance is :$"+balance);
}

public void withdraw(double w)
{  

   if(w<0){
System.out.println("Attempting to withdraw negative value...");
    System.out.println("Cannot withdraw a negative amount...");
}
else
{  System.out.println("Retreiving Balance");
  if(w>balance){
  System.out.println("Attempting to withdraw more than balance");
  System.out.println("Your account balance is only "+balance+" -- you cannot withdraw $"+w);
}
  else
     {if(balance/2==w)
      System.out.println("Withdrwaing Half of the amount");
      
       else if(balance==w)
      System.out.println("Withdrwaing everything in account");

   balance-=w;
 System.out.println("Withdrawing... $"+w);
  System.out.println(name+"'s Current Balance is :$"+balance);
}

}

}

public void printBal()
{
  System.out.println(name+"'s Current Balance is :$"+balance);
}
// end of modal class
}

class BankMain
{
public static void main(String args[])
{
  BankAccount b1 = new BankAccount();

 BankAccount b4 = new BankAccount("Bill Gates");
  b4.printBal();
 
 System.out.println();
  b4.deposit(455.14);
System.out.println();
b4.deposit(-5);

System.out.println();

b4.withdraw(227.57);

System.out.println();
BankAccount b2 = new BankAccount("Poor Paul",-5);
b2.printBal();

System.out.println();
BankAccount b3 = new BankAccount("Jameis Winston", 283.33);
b3.printBal();
System.out.println();
b3.withdraw(-5.0);
b3.printBal();



System.out.println();

b3.withdraw(3983.93);


System.out.println();
b3.withdraw(283.33);


}
}







 