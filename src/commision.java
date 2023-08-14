/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class commision {
    double sf;
    double cr;
    int cR;
   
    public double computeCommision(double sales,double rate)
    {
        sf = sales;
        cr = rate;
        return sales * rate;
    }
    public double computeCommision(double salesfigure,int commisionrate)
    {
        cR = (int)(commisionrate/100.0);
        return cR * salesfigure;
        
    }
    public double computeCommision(double sales)
    {
        cr = 7.5;
        return cr * sales;
    }
    public static void main(String args[])
    {
         double total;
        double total1;
        double total2;
       commision c = new commision();
       total= c.computeCommision(2000.89,0.89 );
       System.out.println("the total is " + total);
       total1=c.computeCommision(4567.90, 89);
        System.out.println("the total is " + total1);
       total2 = c.computeCommision(4500.90);
       System.out.println("The total is " + total2);
    }
    
}
