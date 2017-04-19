/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class five {
    public static void main(String args[]){
        for(int i = 1;i<=4;i++)
        {
            for(int j =0;j<i;j++)
            {
                System.out.print("*");
            }
            System.out.println( );
        }
        for(int i = 0;i<=3;i++)
        {
            for(int a=0;a<(4+i);a++){
            System.out.print(" ");
            }
            for(int j = 4;j>i;j--)
            {
                System.out.print("*");
            }
            System.out.println( );
        }
    }
    
}
