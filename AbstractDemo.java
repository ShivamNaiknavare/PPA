class AbstractDemo
{
    public static void main(String arg[])
    {
        // Demo obj = new Demo();       error we can't create object of abstract class
        Hello hobj = new Hello();
        hobj.fun();
        hobj.gun();
    }    
}

abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside Demo Constructor\n");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun();            // in c++ virtual void fun() = 0;   ------- i.e. pure virtual function in c++

    void gun()
    {
        System.out.println("Inside gun");
    }
}

class Hello extends Demo
{
    public Hello()
    {
        System.out.println("Inside Hello Constructor\n");
    }

    public void fun()
    {
        System.out.println("Inside fun of hello\n");
    }
}

