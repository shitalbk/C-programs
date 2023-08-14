/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class testpizza {
    public static void main(String args[])
    {
        pizza p = new pizza();
        
        p.settoppings("pepporun");
        p.setdiameter(12);
        p.setprice(14.50);
        System.out.println(p.gettoppings());
        System.out.println(p.getdiameter());
        System.out.println(p.getprice());
        p.settoppings("Mushroom");
        p.setdiameter(80);
        p.setprice(89.90);
        System.out.println(p.gettoppings());
        System.out.println(p.getdiameter());
        System.out.println(p.getprice());
    }
    
}
