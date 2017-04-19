/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class hello {
     public static void main(String args[])
    {
         int hourWorked = 45;
        int regularPay =89;
        double overTimePay;
        if(hourWorked>40)
        
            regularPay = 40 * 1000;
            overTimePay = (hourWorked -40) * 1.5 * 1000;
            System.out.println("Regular pay is " + regularPay);
            System.out.println("Overtime pay is " + overTimePay);
        
    }
}
