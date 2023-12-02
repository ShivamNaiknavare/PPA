class CommandLine1
{
    public static void main(String args[])
    {
        System.out.println("Number of command line arguments are : "+args.length);

        System.out.println("Command line arguments are : ");

        for(int i = 0; i < args.length; i++)
        {
            System.out.println(args[i]);
        }
    }
}


//javac CommandLine.java
//java CommandLine PPA 