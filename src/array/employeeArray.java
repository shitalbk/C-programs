/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author shital
 */
public class employeeArray {
   private int empNum;
   private double empSal;
   public employeeArray(int num,double sal)
   {
       empNum = num;
       empSal = sal;
   }
   public void setempNum(int id)
   {
       empNum = id;
   }
   public int getempNum()
   {
       return empNum;
   }
   public void setempSal(double r)
   {
       empSal = r;
   }
   public double getempSal()
   {
       return empSal;
   }
   public static void bubblesort(Employee[] array,int len)
   {
       int a,b;
       Employee temp;
       int highsubscript = len-1;
       for(a = 0;a<highsubscript;a++)
       {
           for(b = 0;b<highsubscript;b++)
           {
               if(array[b].getEmpSal()>array[b+1].getEmpSal())
               {
                   temp = array[b];
                   array[b] = array[b+1];
                   array[b+1] = temp;
               }
           }
       }
   }
   public static void main(String args[])
   {
     Employee[] array = new Employee[5];
     employeeArray(90,900.0);
   }
}
