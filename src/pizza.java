/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class pizza {
    private String toppings;
    private int diameter;
    private double price;
   public String gettoppings()
   {
       return toppings;
   }
   public void settoppings(String toppings)
   {
     this.toppings = toppings;  
   }
   public int getdiameter()
   {
       return diameter;
   }
   public void setdiameter(int diameter )
   {
       this.diameter = diameter;
   }
   public double getprice()
   {
       return price;
   }
   public void setprice(double price)
   {
       this.price = price;
   }
}
