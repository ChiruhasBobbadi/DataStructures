import java.util.*;
public class AttendanceCheck{
   static String result[]; 
      static int n;
     static  String names[]= new String[n];
       static String atd[] = new String[n];
    static int j=0;
     public static void main(String []args){
         int n1;
         Scanner sc = new Scanner(System.in);
        n1 = sc.nextInt();
      
       for(int i=0;i<n1;i++)
       names[i] = sc.next();
       
       for(int i=0;i<n1;i++)
       {
           atd[i] = sc.next();
       }
       
       n=n1;
       
      calculate();
       
     }
     
     static void  calculate()
     {   int p,a,m,t;
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
             else
             if(c=='P')
             p++;
             else
             if(c=='M')
             m++;
             }
             t = t-m;
             
             double per = ((p)/t)*100;
             if(!(per>75))
             {
                 result[j]=s;
                 j++;
             }
             
             a=0;
             p=0;
             m=0;
             
             
             
         }
     }
}