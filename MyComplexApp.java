import java.util.*;

class MyComplex
{
private double real,imag;

MyComplex()
{
real=0.0;
imag=0.0;
}

MyComplex(double real , double imag)
{
this.real=real;
this.imag=imag;
}

void setReal(double real)
{
  this.real=real;
}
double getReal()
{
return real;
}

void setImag(double imag)
{
this.imag=imag;
}

double getImag()
{
 return imag;
}

void setValue(double real , double imag)
{
this.real=real;
this.imag=imag;
}

String tostring()
{
  String val = real+"+";
   val = val+"i"+imag;
return val;
}

boolean isReal()
{
 if(imag==0)
  return true;
else
return false;
}

boolean isImaginary()
{
  if(real==0 && imag!=0)
  return true;
   else
return false;
}


boolean equals(double real , double imag)
{
 if(this.real==real && this.imag==imag)
  return true;
  else
return false;

}

boolean equals(MyComplex obj)

{
  if(obj.real == this.real && obj.imag == this.imag)
  return true;
  else
 return false;
}

double magnitude()
{
double mag = Math.sqrt(real*real+imag*imag);

return mag;
}

double argument()
{
  
return Math.atan2(imag,real);

}

MyComplex add(MyComplex obj )
{
  double r,i;
  r=this.real+obj.real;
  i = this.imag+obj.imag;
  
MyComplex o1 = new MyComplex(r,i);

return o1;
}


MyComplex subtract(MyComplex obj )
{
  double r,i;
  r=this.real-obj.real;
  i = this.imag-obj.imag;
  
MyComplex o1 = new MyComplex(r,i);

return o1;
}

MyComplex multiply(MyComplex obj)
{
 
 double r,i;
 r = (this.real*real - this.imag*imag);
 i = (this.real*imag+this.imag+real);

MyComplex o1 = new MyComplex(r,i);

return o1;
}

/**
MyComplex divide(MyComplex obj)
{
 
 double r,i;
 r= (this.real+

Mycomplex o1 = new MyComplex(r,i);

return o1;
}
*/


MyComplex conjugate(MyComplex obj)
{
 
return new MyComplex(real,-imag);
}


}


class MyComplexApp

{
public static void main(String args[])
{

Scanner sc = new Scanner(System.in);

System.out.println("Enter complex number 1 (real and imaginary part): ");
double r,i;

r= sc.nextDouble();
i = sc.nextDouble();

MyComplex obj1 = new MyComplex(r,i);

System.out.println("Enter complex number 2 (real and imaginary part): ");
 
r = sc.nextDouble();
i = sc.nextDouble();

MyComplex obj2 = new MyComplex(r,i);

System.out.println("Number 1 is : "+obj1.tostring());

 if(obj1.isReal())
  System.out.println(obj1.tostring()+" is a pure number");
 else
System.out.println(obj1.tostring()+" is not a pure number");
 

if(obj1.isImaginary())

System.out.println(obj1.tostring()+" is a pure imaginary number");
 else
System.out.println(obj1.tostring()+" is not a pure imaginary number");


System.out.println("");

System.out.println("Number 2 is : "+obj2.tostring());



 if(obj2.isReal())
  System.out.println(obj2.tostring()+" is a pure number");
 else
System.out.println(obj2.tostring()+" is not a pure number");
 

if(obj2.isImaginary())
System.out.println(obj2.tostring()+" is a pure imaginary number");
 else
System.out.println(obj2.tostring()+" is not a pure imaginary number");

System.out.println("");

if(obj1.equals(obj2))

System.out.println((obj1.tostring())+" is equal to"+(obj2.tostring()));
 else
System.out.println((obj2.tostring())+"  is not equal to"+(obj2.tostring()));


System.out.println("");
System.out.println((obj1.tostring())+"+"+(obj2.tostring())+"="+(obj1.add(obj2)).tostring());

System.out.println("");
System.out.println((obj1.tostring())+"-"+(obj2.tostring())+"="+(obj1.subtract(obj2)).tostring());


 }
}
 






