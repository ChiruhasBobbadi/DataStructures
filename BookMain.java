class Author
{
  String name,email;
  char gender;
  Author(String name , String email,char g)
{
 this.name = name;
 this.email=email;
  gender=g;
} 


}


class Book 
{
 
String name;
Author author;
double price;
int qty;

Book(String name , Author author , double price , int qty)
{

this.name= name;
this.author = author;
this.price = price;
this.qty = qty;
}

Author getAuthor()
{
return author;
}

double getPrice()
{
return price;
}
void setPrice(double price)
{
this.price = price;
}
int getQty()
{
return qty;
}

double getTotalAmt()
{
  return price*qty;
}

void setQty(int q)
{
qty=q;
}

void display(Author a)

{

System.out.println("Author Name="+a.name);

}
}

class BookMain
{
public static void main(String args[])
{
 Author a = new Author("Chiruhas","chiruhas.bobbadi123@gmail.com",'m');

  Book b = new Book("Ghost in the wires",a,1000.15,3);
  
   // printing details

System.out.println("***Book Details****");
System.out.println("Name = "+b.name);
System.out.println("Price="+b.getPrice());
System.out.println("Quantity="+b.getQty());
System.out.println("Total = "+b.getTotalAmt());

b.display(a);




}
}
