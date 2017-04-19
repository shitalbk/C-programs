/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
/**
 *
 * @author shital
 */
public class Jdemographics extends JApplet {
 String companyName = new String("Event Handlers Incorporated");
 Font f = new Font("Arial", Font.BOLD, 15);
 public void paint(Graphics gr)
 {
     gr.setFont(f);
     gr.setColor(Color.red);
    // gr.setColor(Color.magenta);
     gr.drawString(companyName, 10, 100);
     System.out.println("in");
 }
   
    
    
}
