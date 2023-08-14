/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import javax.swing.*;
public class calculator {
    
    public static void main(String args[])throws Exception
    {
       String name;
       int number;
       name = JOptionPane.showInputDialog(null,"Enter the number of guests at your event");
       number = Integer.parseInt(name);
       if(number>100)
           JOptionPane.showMessageDialog(null," a surcharge will apply");
       System.exit(0);
        }
    }


    
    
