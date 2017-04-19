/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;

/**
 *
 * @author shital
 */
public class JMoveLabel extends JApplet implements ActionListener {
JLabel movingMsg = new JLabel("Event Handlers Inc.");
JButton pressbutton = new JButton("Press");
FlowLayout lay = new FlowLayout();
int xLoc = 460, yLoc =300;
   
    public void init() {
  Container  con = getContentPane();
  con.add(movingMsg);
  con.add(pressbutton);
  con.setLayout(lay);
  pressbutton.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == pressbutton)
            movingMsg.setLocation(xLoc, yLoc);
        if(yLoc == 280)
            pressbutton.setEnabled(false);
    }
   

}