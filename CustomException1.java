

import java.io.*;
import java.util.*;
class NoUniversityMatchFoundException extends Exception
{
 NoUniversityMatchFoundException(String s)
 {
 super(s);
}
}

class CustomException1
{
public static void main(String args[])
{

String s;
System.out.println("Enter Name ");
s = new Scanner(System.in).nextLine();

 try
{
 if(s.toLowerCase().startsWith("university") || s.toLowerCase().endsWith("university"))
  System.out.println("given="+s);
else
throw new NoUniversityMatchFoundException("university");
}
catch(Exception e)
{
System.out.println(e);
}
}
}