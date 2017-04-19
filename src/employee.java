/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class employee {
    public static void main(String args[])
    {
        emp e = new emp();
        e.setids("ikeda_shital@yahoo.com");
        System.out.println(e.getids());
        emp e1 = new emp();
        e1.setfirstname("Shital");
        System.out.println(e1.getfirstname());
        emp e2 = new emp();
        e2.setlastname("Bishwokarma");
        System.out.println(e2.getlastname());
    }
           
    
}
