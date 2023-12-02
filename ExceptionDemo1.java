import java.util.*;
//problem of ArithmeticException -----  occur if we divide by zero then exception will arise else code will run
class ExceptionDemo1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 / iNo2;

        System.out.println("Division is : "+iAns);
    }
}