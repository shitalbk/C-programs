/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class tara {
    public static void main(String args[])
    {
        int one = 1;
        int two= 1;
        int star = 7;
        for(int i = 1;i<=star;i+=2)
        {
            for(int j =star;j>i;j-=2)
            {
                System.out.print(" ");
            }
            for(int k = 0;k<i;k++)
            {
                
                System.out.print(one);
               }
            System.out.println( );
           
        }
    }
    
}
