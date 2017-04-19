/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class space {
    public static void main(String args[])
    {
       int c = 10;
       int b =1;
       for(int a =1;a<=10;a++){
           System.out.println(b);
           b++;
           System.out.println(c);
           c--;
           
       }
       System.out.println();
       System.out.println();
        for (int j=3;j>=1;j--){
        for(int i = 1;i<=j;i++)
        {
            System.out.print("*");
        }
        System.out.println();
        }
    }
}
