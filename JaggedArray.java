//Create Jagged Array & accept no of rows and & size of each row from user.

import java.util.Scanner;

class JaggedArray
{
    public static void main(String[] Args)
    {
        int iRows = 0, iSize = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no of rows : ");
        iRows = sobj.nextInt();

        //Creation of jagged Array
        int Arr[][] = new int[iRows][];

        //get size of each row  & initialize element with user i/p
        for(int i = 0; i < iRows; i++)
        {
            System.out.println("Enter the size of "+i+" row :");
            iSize = sobj.nextInt();

            //create each row with specified size
            Arr[i] = new int[iSize];

            //initialize elements with user input
            for(int j = 0; j < iSize; j++)
            {
                System.out.println("Enter value for element "+(j+1)+" in row "+(i+1)+" : ");
                Arr[i][j] = sobj.nextInt();
            }
        }
        sobj.close();

        //print the jagged array
        System.out.println("Jagged Array is : ");

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}