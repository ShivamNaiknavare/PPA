class Demo extends Thread
{
    public void run()       //Running State
    {
       for(int i = 1; i < 10; i++)
       {
            try
            {
                System.out.println("Value of i is : "+i);
                Thread.sleep(1000);                 //it will wait for 1 second
            }
            catch(Exception obj)
            {
                
            }
       }
    }
}

class Multi5
{
    public static void main(String arg[])   throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();  //New State
        obj1.start();       //Runnable State
        obj1.join();    //aadhi demo class mdhe purn thread execution hoil mg line 29 vr yeil.
        System.out.println("End of main thread");
    }
}