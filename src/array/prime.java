/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author shital
 */
import java.util.Scanner;
public class prime {
    int counter = 2;
     static  boolean isprime = false;
       int tmp;
    public static void main(String args[])throws Exception
    {
        
        prime p = new prime();
        p.prime();
        if(isprime == true)
            System.out.println("The number is a prime number");
        else
                System.out.println("The number is not a prime number");
            
    }
    public boolean prime()
    {
       
       System.out.println("Enter any prime number: " );
       Scanner sc = new Scanner(System.in);
     int num =  sc.nextInt();
       while(num>= 2)
       {
         tmp = num % ;
         if(tmp == 0){
             return false;
         }
        
       }
       return true;
       }
        
    
}
