import java.io.*;

class CreateFile 
{
    public static void main(String Arg[])
    {
        try
        {
            File fobj = new File("PPA.txt") ;        //File is a inbuilt class created obj of File class
            fobj.createNewFile();                   //inbuilt function createNewFile()
        }
        catch (Exception obj)
        {

        }    
    }

}