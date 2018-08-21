


 abstract  class Shape
{
  String color;
abstract double getArea();

}

class Rectangle extends Shape
{
  int length,width;
   Rectangle(int l,int w , String c)
   {
     length = l;
      width=w;
      color=c;
}

double getArea()
{
 return length*width;
}
}


class Triangle extends Shape
{
int base,height;

Triangle(int l,int w , String c)
   {
     base = l;
      height=w;
      color=c;
}
double getArea()
{
return 0.5*(base*height);
}
}

class ShapeMain
{
public static void main(String args[])
{
Triangle t = new Triangle(4,5,"blue");

Rectangle r = new Rectangle(4,5,"red");

System.out.println("Rectangle color is "+r.color);
System.out.println("Area is :"+r.getArea());

System.out.println("Triangle color is "+t.color);
System.out.println("Area is :"+t.getArea());

 }
}



