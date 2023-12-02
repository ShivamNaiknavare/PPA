class Demo extends Thread
{
    public void run()       //Running State
    {
    
    }
}

class Multi6
{
    public static void main(String arg[])   throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();         //New State
        Demo obj2 = new Demo();      

        obj1.start();       //Runnable State
        obj2.start();
        
        obj1.setPriority(8);        //aadhi priority set kra mg start kra 
        obj2.setPriority(10);

        System.out.println("Priority of obj1 is : "+obj1.getPriority());
        System.out.println("Priority of obj2 is : "+obj2.getPriority());
   
    }
}

//MIN_PRIORITY          1
//NORM_PRIORITY         5
//MAX_PRIORITY          10