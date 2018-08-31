import java.util.*;
public class Main{
   
      static int n;
  static     String result[] = new String[10];
    static int j=0;
     public static void main(String []args){
         int n1;
         Scanner sc = new Scanner(System.in);
        n1 = sc.nextInt();
         String names[]= new String[n1];
        String atd[] = new String[n1];
       for(int i=0;i<n1;i++)
       names[i] = sc.next();
       
       for(int i=0;i<n1;i++)
       {
           atd[i] = sc.next();
       }
       
       n=n1;
       
      calculate(names,atd);
       
     }
     
     static void  calculate(String names[] , String atd[])
     {   float p,a,m,t;
     p=0;
     a=0;
     m=0;
     t=0;
         for(int i=0;i<n;i++)
         {
			
             String s = atd[i];
             t=s.length();
             for(int j=0;j<s.length();j++)
             {  char c = s.charAt(j);
             
             if(c=='A')
             a++;
            if(c=='P')
             p++;
            if(c=='M')
             m++;
             }
             t = t-m;
             ystem.out.println(p+" "+a+" "+t);
            float per = (float)(p/t)*100;
             if(!(per>75))
             {
                 result[j]=names[i];
                 j++;
             }
             
             a=0;
             p=0;
             m=0;
		 }
             
      for(int i=0;result[i]!=null;i++)
      System.out.println(result[i]);
             
             
         }
     }

