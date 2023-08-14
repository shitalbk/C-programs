
import org.omg.PortableInterceptor.SYSTEM_EXCEPTION;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class salary {
    public static void main(String args[] )
    {
       salary s = new salary();
       double d = s.method();
       System.out.println(d);
    }
    public double method()
    {
        double ratePerHour = 25;
        double hoursWorked = 40;
       double overtimeHours = 13;
         double wage = ratePerHour * overtimeHours;
        double earnsTime = 1.5*(wage*1.5);
        return earnsTime;
        
        
    }
       
    
}
