/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import java.util.Scanner;
public class twonumber {
    public static void main(String args[])
    {
        System.out.println("Enter the first number: ");
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        System.out.println("Enter the second number: ");
        int j = sc.nextInt();
        System.out.println("Enter the second number: ");
        int k = sc.nextInt();
        if(i<j & j<k)
        {
            System.out.println("The first number you have entered is the smaller one");
        } 
        
       if(j<i & j<k)
       {
           System.out.println("The second number you have entered is the smaller one");
       }
       if(k<i & k<j)
       {
         System.out.println("The third number you have entered is the smaller one");  
       }
    }
}
