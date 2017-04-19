/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author shital
 */
public class findStudent {
    public static void main(String args[])throws Exception
    {
        String[][] students = 
        {  {"Dave", "Bonnie","Hannah"},
           {"Iris", "Keith", "Carl"},
           {"Amy", "Jessica", "Francis"},
           {"Ellen", "George", "Lydia"}
        };
        char stu;
        int r,c;
        System.out.print("Enter student initial: ");
        stu = Character.toUpperCase((char)System.in.read());
        System.in.read();System.in.read();
        for(r = 0;r<4;r++)
        
            for(c = 0;c<3;c++)
          
                if(stu == students[r][c].charAt(0))
                    System.out.println("Student is in row " +  r  + " and column " + c);
        
        
       
        
    
    }
}
