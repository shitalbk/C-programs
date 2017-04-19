/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class testcheckup {
    public static void main(String args[])
    {
        checkup c = new checkup();
        c.setNumber(1);
        c.setBp(100.78);
        c.setBp1(180.89);
        System.out.println("The number of patient is "+ c.getNumber());
        System.out.println(" The systolic blood pressure of patient is " + c.getBp());
        System.out.println("The distolic blood pressure of patient is" + c.getBp1());
        System.out.println("The ratio of systolic and distolic blood pressure is" + c.getBp()/c.getBp1());
        
        
        
        
        
        
        
        
        
        
        
        
        checkup c1 = new checkup();
        checkup c2 = new checkup();
        checkup c3 = new checkup();
    }
    
}
