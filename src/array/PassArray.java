/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author shital
 */
public class PassArray {
 public static void main(String args[])throws Exception
 {
     int[] someNums = {5,10,15,20};
     int x;
     for(x = 0;x<4;x++)
     {
         System.out.println("In main " + someNums[x]);
         methodGetsArray(someNums);
     }
     for(x = 0;x<4;x++)
     {
         System.out.println("At the end of main " + someNums[x]);
     }
  }
     public static void methodGetsArray(int[] arr)
     {
         for(int y = 0;y<4;y++)
         {
            System.out.println("In the methodGetsArray " + arr[y]);
            arr[y] = 888;
         }
     }
}
