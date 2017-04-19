/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author shital
 */
public class EventArray {
    private char eventType;
    private double eventMinRate;
    public EventArray(char event,double rate)
    {
        eventType = event;
        eventMinRate = rate;
    }
    public char getEventType()
    {
        return eventType;
    }
    public double getEventMinRate()
    {
        return eventMinRate;
    }
    public void setEventMinRate(double rate)
    {
       eventMinRate = rate; 
    }
    public static void main(String args[])
    {
      EventArray[] e = new EventArray[5];
      int x;
      for(x = 0;x<e.length;x++)
      {
          e[x] = new EventArray('a',90.9);
          raiseRates(e);
      }
      for(x = 0;x<e.length;x++)
      {
          System.out.println(" Event " + (x+1) + " " + e[x].getEventType()+ " " + e[x].getEventMinRate());
      }
    }
      private static void raiseRates(EventArray[] event)
      {
        double temp;
        for(int q = 0;q<5;q++)
        {
            temp = event[q].getEventMinRate();
            temp+=5;
            event[q].setEventMinRate(temp);
        }
      }
    
}
