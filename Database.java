import java.sql.*;

class Database
{   
    public static void main(String Arg[]) 
    {
        try
        {
            String URL = "jdbc:mysql://localhost:3306/ppa";
            String Username = "root";
            String Password = "root";
            String Query = "select * from student";

            Connection cobj = DriverManager.getConnection(URL,Username,Password);

            Statement sobj = cobj.createStatement();

            ResultSet robj = sobj.executeQuery(Query);

            while(robj.next())
            {
                System.out.println("RNo : "+robj.getInt("rno"));
                System.out.println("Name : "+robj.getString("name"));
                System.out.println("City : "+robj.getString("address"));
                System.out.println("Marks : "+robj.getInt("marks"));
            }
        }
        catch (Exception eobj)
        {

        }
    }
}