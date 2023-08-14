/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class ev {
   private int siteNumber;
   private String managerName;
   private double usagefee;
   ev()
      {
      siteNumber = 999;
      managerName = "xix";
      usagefee = 9000;
   }
   public void setSiteNumber(int n)
   {
       n = siteNumber;
   }
   public int getSiteNumber()
   {
       return siteNumber;
   }
   public void setmanagerName(String name)
   {
    name = managerName;   
   }
   public String getManagerName()
   {
       return managerName;
   }
   public void setUsagefee(double fee)
           
   {
       fee = usagefee;
   }
   public double getUsagefee()
   {
       return usagefee;
   }
    
        
   
    
}
