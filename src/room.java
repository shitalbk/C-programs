/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class room {
    private String meetDay;
    private String  meetStartTime;
    private String meetEndtime;
    
    public void  setDay(String meetDay)
    {
        this.meetDay = meetDay;
    }
    public String getDay()
    {
        return meetDay;
    }
    public void setStartTime(String meetStartTime)
    {
        this.meetStartTime = meetStartTime;
    }
    public String getStartTime()
    {
        return meetStartTime;
    }
      public void setEndtime(String meetEndtime)
      {
          this.meetEndtime = meetEndtime;
      }
      public String getEndtime()
      {
          return meetEndtime;
      }
}