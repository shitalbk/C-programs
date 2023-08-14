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
public class JDemoPaint extends JApplet implements ActionListener
{
    JButton pressButton = new JButton("Press");
    FlowLayout flow = new FlowLayout();
    
    public void init() {
        Container con = getContentPane();
        con.add(pressButton);
        con.setLayout(flow);
        pressButton.addActionListener(this);
    }
    public void paint(Graphics g)
    {
        System.out.println("in paint method");
        pressButton.repaint();
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == pressButton)
        {
            repaint();
        }
    }
    
}
