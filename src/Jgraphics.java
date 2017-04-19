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
public class Jgraphics extends JApplet implements ActionListener {

   JButton but = new JButton("press me");
   FlowLayout f = new FlowLayout();
   Font fon = new Font("Arial" , Font.BOLD,25);
   
    public void init() {
    Container con = getContentPane();
   
    con.add(but);
    con.setLayout(f);
    con.setBackground( Color.GREEN);
    
    but.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
       Object source = e.getSource();
       if(source == but)
       {
           Graphics g = getGraphics();
           
           g.setFont(fon);
           g.setColor(Color.CYAN);
           g.drawString("You clicked the press button ", 500, 500);
           
       }
    }
}
