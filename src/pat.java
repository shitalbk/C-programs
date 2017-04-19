/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class pat {
    public static void main(String args[])
    {
         int space = 5;
         int space1 = 1;
        for(int i = 1;i<=11; i=i+2)
        {
          
            for(int k = 0;k<space;k++)
            {
                System.out.print(" ");
            }
            
            for(int j = 0;j<i;j++)
            {
                System.out.print("*");
            }
                       System.out.println( );
                       space--;
        }
        for(int a = 9;a>=1;a=a-2)
        {
           for(int b =0;b<space1;b++ )
           {
               System.out.print(" ");
           }
           for(int c = 0;c<a;c++)
           {
             System.out.print("*");  
           }
           System.out.println( );
           space1++;
        }
    }
            
    
}
