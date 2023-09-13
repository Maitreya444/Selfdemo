//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde  Output : Maitreya Gangurde

import java.util.*;

public class HA4_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Your Name");
        String iValue = sobj.nextLine();

        System.out.println("Your Name is " +iValue);
    
        sobj.close();
    }    
}