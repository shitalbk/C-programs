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
public class JObject extends JApplet implements ActionListener {
    String name = new String("Event Handlers Corporated");
    JButton move = new JButton("Press");
    FlowLayout flow = new FlowLayout();
    Font fon = new Font("Helvetica", Font.ITALIC,25);
    int x= 10,y=50;
   
    public void init() {
       Container con = getContentPane();
       con.add(move);
       con.setLayout(flow);
       con.setBackground(Color.ORANGE);
       move.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == move)
        {
            Graphics g = getGraphics();
            g.setFont(fon);
            g.setColor(Color.MAGENTA);
            if(x<250)
            {
            g.drawString(name, x+=20, y+=20);
            }
            else 
            {
                move.setEnabled(false);
                g.setColor(Color.BLACK);
                g.drawOval(50, 170, 70, 70);
                g.drawLine(85, 240, 110, 300);
                g.drawOval(100, 170, 70, 70);
                g.drawLine(135, 240, 110, 300);
            }
        }
    }
    
}
