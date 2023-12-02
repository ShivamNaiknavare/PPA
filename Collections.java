import java.util.*;

class Collections
{
    public static void main(String args[])
    {
        LinkedList <Integer> lobj = new LinkedList<Integer>();

        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);

        System.out.println(lobj);

        lobj.addFirst(5);
        System.out.println(lobj);

        if(lobj.contains(30))
        {
            System.out.println("LL Contains 30 in it");
        }
        else
        {
            System.out.println("LL not contains 30");
        }

        System.out.println("Index of 30 is : "+lobj.indexOf(30));
        
        Iterator iobj = lobj.iterator();

        while(iobj.hasNext())           //hasNext returns True or False
        {
            System.out.println(iobj.next());
        }

        lobj.clear();   //it clears all LinkedList which can't be recovered
    }
}