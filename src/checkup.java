/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class checkup {
    private int patientno;
    private double systolic;
    private double distolic;
    private double ldl;
    private double hdl;
    
    public void setNumber(int n)
    {
        n = patientno;
    }
    public int getNumber()
    {
        return patientno;
    }
    
    
    public void setBp(double s)
    {
        s = systolic;
    }
    public double getBp()
    {
        return systolic;
    }
    public void setBp1(double d)
    {
        d = distolic;
    }
    public double getBp1()
    {
        return distolic;
    }
    public void setCf(double l)
    {
    l = ldl;  
    }
    public double getCf()
    {
        return ldl;
    }
    public void setCf1(double h)
    {
        h = hdl;
    }
    public double getCf1()
    {
        return hdl;
    }
    public void computeRatio(double a , double b)
    {
       double divide = a/b;
       System.out.println("The ratio that divides ldl by hdl is" + divide);
    }
    public void explainRatio()
    {
        System.out.println("hdl is known as   good cholestrol and that a ratio of 3.5 or lower is considered optimum");
    }
    }
        
        
        
    

