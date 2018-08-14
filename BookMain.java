class Author
{
String name,email;
char gender;


}


class Book extends Author
{
 
String name;
Auhtor author;
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

void setQty(int q)
{
qty=q;
}

String toString()
{
}
}

class BookMain
{
public static void main(String args[])
{


}
}