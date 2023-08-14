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
    public static void main(String args[])
    {
        System.out.println("Please enter a number: ");
        Scanner sc = new Scanner(System.in);
        int pri = sc.nextInt();
        
        int i = 1;
       int factor = 0;
        if(i<=pri)
        {
             int r;
            r = pri%i;
            
            if(r==0)
            {
                
                 factor++; 
               i++;
            }
            else
               
                i++;
            if(factor==2)
        {
          System.out.println("The number you have entered is a prime number ");  
        }
        else
            System.out.println("The number you have entered is not a prime number ");
        }
        
    }
}
