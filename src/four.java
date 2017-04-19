/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */

public class four {
    public static void main(String args[])
    {
        int a=4,b=a;
       
        for(int i = 1;i<=8;i++)
        {
           
     if(i<=4){
         
           for(int j=0;j<i;j++)
            {
               System.out.print("*"); 
            }
     }
     else {
           for (int g=1;g<a;g++){
           System.out.print(" "); 
           }
           a++;
           for(int j=1;j<=b;j++)
            {
               System.out.print("*"); 
            }
           b--;
           }
          System.out.println( );
         
    }
    }
}
