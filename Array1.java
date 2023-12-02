class Array1
{
    public static void main(String arg[])
    {
        // Syntax - 1   list initialization --  static allocation
        int Arr1[] = {11,21,51,101};

        //Syntax - 2    member by initialization --- dynamic allocation
        int Arr2[] = new int[4];
        Arr2[0] = 11;
        Arr2[1] = 21;
        Arr2[2] = 51;
        Arr2[3] = 101;

        System.out.println("Lenght of array is : "+Arr1.length);        //length will display no of elements in array

        int iCnt = 0;

        //Array traversing
        for(iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            System.out.println(Arr1[iCnt]);
        }
    }
}