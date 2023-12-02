class Demo extends Thread
{
    public void run()       //Running State
    {
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is : "+name);
        for(int i = 1; i < 70; i++)
        {
            System.out.println("Name of thread is : "+name+" With counter : "+i);
        }
    }
}

class Multi3
{
    public static void main(String arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();  //New State
        Demo obj2 = new Demo();

        obj1.setName("First_Thread");
        obj2.setName("Second_Thread");

        obj1.start();       //Runnable State
        obj2.start();

    }
}