//Accpet one number from user and if that number is < 10 then print Hello else print Demo
import java.util.*;

class Number
{
    public void Display(int iNo)
    {
        if (iNo <= 10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }
    }
}

public class HA2_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a numeber");
        int iValue = sobj.nextInt();
        
        Number nobj = new Number();
        {
            nobj.Display(iValue); 
        }
        sobj.close();
    }
}
