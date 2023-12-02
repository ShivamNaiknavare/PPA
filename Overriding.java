
class Base 
{
    public void fun()       //1000
    {
        System.out.println("Inside Base Fun\n");
    }
    public void gun()     //2000  
    {
        System.out.println("Inside Base gun\n");
    }
    public void sun()   //3000
    {
        System.out.println("Inside Base sun\n");
    }
    public void run()   //4000
    {
        System.out.println("Inside Base run\n");
    }
}

class Derievd extends Base
{
    public void fun()   //5000
    {
        System.out.println("Inside Derived fun");
    }
    public void sun()   //6000
    {
        System.out.println("Inside Derived sun");
    }
    public void run(int A)  //7000
    {
        System.out.println("Inside Derived run with 1 parameter");
    }
    public void mun()       //8000
    {
        System.out.println("Inside derived mun");
    }
}

class Overriding
{
    public static void main(String arg[])
    {
        Base bobj = new Derievd();          //Upcasting
        bobj.fun();         //Derived fun
        bobj.gun();         //Base gun
        bobj.sun();         //Derived sun

        bobj.run();         //Base run
        
        //bobj.run(11);

        //bobj.mun();
    }
}