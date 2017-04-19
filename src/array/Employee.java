/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author shital
 */
public class Employee {
    private int empNum;
    private double empSal;
   
    Employee(int e,double s)
    {
        empNum = e;
        empSal = s;
        
    }
    public int getEmpNum()
    {
        return empNum;
    }
    public double getEmpSal()
    {
        return empSal;
    }
    public static void main(String args[])
    {
        Employee [] emp = new Employee[7];
        for(int x = 0;x<7;x++)
    emp[x] = new Employee(101+x,5.31);
        for(int x= 0;x<7;x++)
            System.out.println(emp[x].getEmpNum()+" "+emp[x].getEmpSal());
    }
    
}
