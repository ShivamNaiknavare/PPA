
class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Base Constructor");
    }

    public void Fun()
    {
        System.out.println("Base Fun");
    }
}

class Derieved extends Base
{
    public int X,Y;

    public Derieved()
    {
        System.out.println("Derived Constructor");
    }

    public void Gun()
    {
        System.out.println("Derievd Gun");
    }
}

class Single
{
    public static void main(String arg[])
    {
        Derieved dobj = new Derieved();
        dobj.Fun();
        dobj.Gun();

    }
}