

class Person
{
String name,add;

Person(String name, String add)
{
this.name = name;
this.add= add;
}

String getName()
{
return name;
}

String getAddress()
{
return add;
}

void setAddress(String a)
{
add = a;
}

}


class Student extends Person
{

int nc;
String courses[]=new String[100];

int grades[]= new int[100];

Student(String name , String add)
{
super(name , add);
nc=0;
 System.out.println("Student : "+name+"Address: "+add);
}

void addCourseGrade(String c , int g)
{
  courses[nc] = c;
  grades[nc] = g;
  nc++;
}

void printGrade()
{ System.out.println("Printing grades");
  for ( int i=0;i<nc;i++)
   System.out.println(grades[i]);
}

double getAvgGrade()
{ double sum=0;
    for ( int i=0;i<nc;i++)
   sum+=grades[i];

return sum/nc;
}

}


class Teacher extends Person
{
int nc;
String courses[]=new String[100];
  Teacher(String name , String add)
  { 
  super(name,add);
  nc=0;
  System.out.println("Student : "+name+"Address: "+add);
  } 

void addCourse(String c)
{
 boolean flag=false;

if(nc==0)
{
  courses[0] = c;

    System.out.println(c+" added Sucessfully");
   nc++;
}
else
{

    for(int i = 0;i<nc;i++)
       if(c.equals(courses[i]))
        flag=true;
 if(flag==true)
     System.out.println(c+" already exists");
     else
    {
     courses[nc] = c;
     nc++;
    System.out.println(c+" added Sucessfully");
   }
}
}


   


void removeCourse(String c)
{
   int pos=-1;

   for(int i=0;i<nc;i++)
   {
      if(c.equals(courses[i])){
       pos=i;
     break;
    }
}


if(pos<0)
System.out.println(c+" doesn't exists");
else
{
 System.out.println(c+" deleted sucessfully");


for(int i=pos;i<nc-1;i++)
courses[i] = courses[i+1];

nc--;
}


}

}


class PersonMain
{
public static void main(String args[])
{
Student s = new Student("Mohd Ali","9 kg Satu");



Teacher t = new Teacher("Paul Tran" ,"8 sunset way");

s.addCourseGrade("IM101",90);
s.addCourseGrade("IM102",100);
s.addCourseGrade("IM103",95);

System.out.println("Average Grade is "+s.getAvgGrade());

t.addCourse("IM101");
t.addCourse("IM102");
t.addCourse("IM103");

t.addCourse("IM101");

t.removeCourse("IM101");
t.removeCourse("IM102");
t.removeCourse("IM101");
 
}
}

 






