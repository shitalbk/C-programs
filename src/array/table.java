/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class table {
    public static void main(String args[])
    {
        
        int a[] = new int[11];
        for(int i = 1;i<11;i++)
        {
            for(int j = 1;j<11;j++)
            {
              a[j] = i * j;
          System.out.println("The table of " + i + " * " + j + " = " + a[j] );
            
            }
            System.out.println( ); 
            
          
        }
    }
} 