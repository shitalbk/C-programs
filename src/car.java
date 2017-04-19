/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class car {
    private  static char eventType = 'N';
    private static double CORP_RATE = 23.3;
   public car(char event,double rate )
   {
     eventType = event; 
     CORP_RATE = rate;
   }
   
    static final double PRI_RATE = 47.99; 
    static final double NON_PROF_RATE = 40.99;
 public static void main(String args[])
    {
        car anEvent;
    System.out.println("N for non profit event");
    switch(eventType)
    {
        case 'C':
            System.out.println("Dustin Britt");
            anEvent = new car(eventType,CORP_RATE);
            break;
        case 'P':
            System.out.println("Carmen Lindsey");
            anEvent = new car(eventType,PRI_RATE);
            break;
        case 'N':
            System.out.println("robin armanetti");
            anEvent = new car(eventType,NON_PROF_RATE);
            break;
        default:
            System.out.println("invalid entry");
            anEvent = new car('X',0.0);
    }   
     
    }
    
}

