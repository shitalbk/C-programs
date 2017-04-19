/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class pay {
    double hourWorked;
    double ratepay;
    double withholdingRate;
    double grosspay;
    double netpay;
    public double computeNetpay(double hourwork,double rate)
    {
        hourWorked = hourwork;
        ratepay = rate;
        return grosspay = hourWorked * ratepay;
    }
    public double computeNetpay(double withholding)
    {
      withholdingRate = withholding;
      withholdingRate = 15/100;
      return withholdingRate;
    }
    public double computeNetpay()
    {
        
       netpay = grosspay - withholdingRate;
       return netpay;
    }
    public static void main(String args[])
    {
     pay p = new pay();
    System.out.println( p.computeNetpay(8.45, 4.9));
     
    System.out.println( p.computeNetpay(89.89));
     System.out.println(p.computeNetpay());
     
         }
    
}
