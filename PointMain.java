
class Point2d
{
int x,y;

Point2d()
{
}
Point2d(int x,int y)
{
this.x=x;
this.y=y;
}

void setX(int x)
{
this.x=x;
}
void setY(int y)
{
this.y = y;
}

int getX()
{
return x;
}
int getY()
{
return y;
}

}

class Point3d extends Point2d
{
int z;
Point3d()
{
}
Point3d(int x,int y,int z)
{ super(x,y);
this.z=z;
}

int getZ()
{
return z;
}

void setZ(int z)
{
this.z=z;
}
}


class PointMain
{
public static void main(String args[])
{
Point3d p = new Point3d();
}
}
