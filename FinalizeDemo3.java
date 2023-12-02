class Employee
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)                  //Parameterized Constructor
    {   
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize");
    }

    void Display()
    {
        System.out.println("Employee Name "+this.Name);
        System.out.println("Employee Salary "+this.Salary);
        System.out.println("Employee Age "+this.Age);
        System.out.println("Employee Address "+this.Address);
    }
}

class FinalizeDemo3
{
    public static void main(String Arg[])
    {
        Employee eobj = new Employee("Amit",78000,21,"Shirpur");
        Employee eobj2 = eobj;

        Employee eobj3 = new Employee("Sagar",8000,22,"Shirpur");

        eobj.Display();
        System.out.println("Hash Code of eobj is : "+eobj.hashCode());
        System.out.println("Hash Code of eobj is : "+eobj2.hashCode());

        System.out.println("Hash Code of eobj is : "+eobj3.hashCode());
        eobj = null;

        System.gc();            //Automatic Garbage Collector
    }
}   