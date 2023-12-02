import java.util.*;
//problem of ArrayIndexOutOfBoundsException --- arise if we will access array elements which are out of bound
class ExceptionDemo2X
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,50};           //specifying size of array is optional in java

        System.out.println("Enter the index from where you want to fetch the data ");
        int iIndex = sobj.nextInt();
        
        try
        {
            System.out.println("Inside try block ");
            System.out.println("Data is : "+Arr[iIndex]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Array index out of bound exception "+obj);
        }
        catch(Exception obj)                                    //Generic catch block                  
        {
            System.out.println("Inside generic catch block "+obj);
        }
        finally
        {
            System.out.println("Inside finally block ");
        }

    }
}