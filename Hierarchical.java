
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

class DerievedX extends Base
{
    public int P,Q;
    
    public DerievedX()
    {
        System.out.println("DerivedX Constructor");
    }
}

class Hierarchical
{
    public static void main(String arg[])
    {
        System.out.println("");

        Derieved dobj1 = new Derieved();
        DerievedX dobj2 = new DerievedX();

        

    }
}