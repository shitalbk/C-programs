/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class midpoint {
    public static void main(String args[])
    {
        
        int places = 9;
        for(int i = 1;i<=places;i+=2)
        {
            for(int j = places;j>i;j-=2)
            {
                System.out.print(" ");
            }
            int l =1;
            for(int k =1;k<=i;k++)
            {
                System.out.print(l);
               
       if(k==i/2+1){
           
                     l-=2;
                     
                }
               l++;
              
              
            }
            System.out.println( );
           
        }
        
    }
    
}
