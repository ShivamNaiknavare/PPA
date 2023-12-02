import java.io.*;

class ReadFile
{
    public static void main(String Arg[])
    {
        try
        {
            FileInputStream fobj = new FileInputStream("PPA.txt");  //to read data create obj of FileInputStream class
            int i = 0;

            while((i = fobj.read()) != -1)                          //read() inbuilt function
            {
                System.out.print((char)i);
            }
            System.out.println();
        }
        catch(Exception obj)
        {

        }
    }


}