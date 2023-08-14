/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class roomschedule {
    public static void main(String args[])
    {
        room r = new room();
        r.setDay("Sunday");
        r.setStartTime("12:45");
        r.setEndtime("03:30");
        System.out.println("The meeting is on" + r.getDay() + "at" + r.getStartTime() + "and ends at " +r.getEndtime());
    }
    
}
