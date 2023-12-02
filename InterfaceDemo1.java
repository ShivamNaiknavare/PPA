
class InterfaceDemo1
{
    public static void main(String arg[])
    {
        PPA pobj = new PPA();
        System.out.println("Value of PI is : "+circle.PI);
        //circle.PI = 393.8f;           error because characteristics of interface are bydefault final we cant modify them.
        float fRet = 0.0f;
        fRet = pobj.Area(10.7f);
        System.out.println("Area is : "+fRet);
        fRet = pobj.Circumfarance(10.7f);
        System.out.println("Circumfarance is : "+fRet);
    }
}

interface circle
{
    float PI = 3.14f;
    float Area(float Radius);
    float Circumfarance(float Radius);
}

class PPA implements circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }

    public float Circumfarance(float Radius)
    {
        return 2 * PI * Radius;
    }
}

