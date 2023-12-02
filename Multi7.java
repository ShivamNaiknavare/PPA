class Demo extends Thread
{
    public void run()       //Running State
    {
    }
    synchronized  public void Display()     //to allow threads to access one by one on the calling basis
    {

    }
}

class Multi7
{
    public static void main(String arg[])   throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();         //New State
        Demo obj2 = new Demo();           

        obj1.setPriority(8);
        obj2.setPriority(10);

        obj1.start();       //Runnable State
        obj2.start();

        System.out.println("Priority of obj1 is : "+obj1.getPriority());
        System.out.println("Priority of obj2 is : "+obj2.getPriority());

    }
}