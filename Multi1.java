//1st way to perform multithreading

class Multi1
{
    public static void main(String arg[])
    {
        System.out.println("Inside Mmin thread...");

        Demo obj1 = new Demo(); 
        Demo obj2 = new Demo();

        obj1.start();
        obj2.start();
        
    }
}

class Demo extends Thread
{   
    public void run()
    {
        System.out.println("Thread is running...");
    }

}