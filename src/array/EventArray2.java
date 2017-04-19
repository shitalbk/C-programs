/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class EventArray2 {
    double rate = 0;
   static char[] eventCode = {'C','P','N'};
   
    private int EventType;
    private double EventMinRate;
    static final double CORP_RATE = 75.99;
    static final double PRI_RATE = 47.99;
    static final double NON_PROF_RATE = 40.99;
    EventArray2(int event,double rate)
    {
        EventType = event;
        EventMinRate = rate;
    }
    public int getEventType()
    {
        return EventType;
    }
    public double getEventMinRate()
    {
        return EventMinRate;
    }
           
     public static void main(String[] args)throws Exception {
          char event = 'Z';
          double rate = 0;
          double [] eventRate = {CORP_RATE,PRI_RATE,NON_PROF_RATE};
          EventArray2 [] e = new EventArray2[5];
          for(int i = 0;i<5;i++)
          {
              System.out.println("Enter event type : ");
              System.out.println("C for corprate");
              System.out.println("P for Private");
              System.out.println("N for NonProfitRate");
              event = (char)System.in.read();
              System.in.read();System.in.read();
              e[i] = new EventArray2(event,rate);
              
                  
                  if(event == eventCode[i])
                      rate = eventRate[i];
              }
          for(int i = 0;i<5;i++)
          {
              System.out.println("Event" + (i+1)+  " " + e[i].getEventType() + " " +e[i].getEventMinRate());
          }
  
  
  
 
    
     
    }
    }
