

abstract class Monster 
{
  String name;
   Monster(String name)
{
this.name=name;
}
  abstract String attack();
}


class FireMonster extends Monster
{
  FireMonster(String name)
{
super(name);
}

String attack()
{
return "Attack with fire!";
}
}

class WaterMonster extends Monster
{
WaterMonster(String name)
{
super(name);
}
String attack()
{
return "Attack with water!";
}
}

class StoneMonster  extends Monster
{
 StoneMonster(String name)
{
super(name);
}

String attack()
{
return "Attack with stones!";
}
}


class MonsterMain
{
  public static void main(String args[])
{
 
System.out.println(new FireMonster("").attack());
System.out.println(new WaterMonster("").attack());
System.out.println(new StoneMonster("").attack());
//System.out.println(new StoneMonster("").attack());
System.out.println(new FireMonster("Name").name +" I don't know how to attack");

}
}