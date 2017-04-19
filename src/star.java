/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class star {
    public static void main(String args[])
    {
            int star = 70;
    
        for(int i=1;i<=star;i++)
        {
         for(int j=star;j>i;j--)
         {
           System.out.print(" ");  
         }
         for(int k =0;k<i;k++)
         {
             System.out.print("*");
            System.out.print(" ");
         }
         System.out.println( );
        }
        for(int i = 1;i<star;i++)
        {
           for(int j = 0;j<i;j++)
           {
               System.out.print(" ");
           }
           for(int k = star;k>i;k--)
           {
               System.out.print("*");
               System.out.print(" ");
           }
           System.out.println( );
        }
    }
    
}
