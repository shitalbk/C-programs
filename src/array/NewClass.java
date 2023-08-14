/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author shital
 */
public class NewClass {
  static int  itemOrdered;
  static boolean validItem;
  static double itemPrice;
   public static void main(String args[])
   {
       
       int [] validValues = {101,201,890,789,456,876,786,456,234,900};
       double[] prices = {0.90,0.99,0.89,0.79,0.67,0.90,0.99,0.89,0.79,0.67};
      int x = 0;
      while (x<10 && itemOrdered != validValues[x])
          x++;
           if(x != 10)
           {
               validItem = true;
               itemPrice = prices[x];
           }
           System.out.println(validItem);
           System.out.println(itemPrice);
       
   }
}
