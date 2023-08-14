/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class invoice {
    public static void main(String args[])
    {
        inv i = new inv();
        i.setItemname("chair");
        i.setquantity(6);
        i.setprice(1000);
        System.out.println("The total cost of the chair is" + i.getquantity()*i.getprice());
        
        
        inv i1 = new inv();
        i1.setItemname("books");
        i1.setquantity(10);
        i1.setprice(500);
        System.out.println("The total cost of the books is" + i1.getquantity()*i1.getprice());
    }
    
}
