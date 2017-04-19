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
public class JLifeCycle extends JApplet implements ActionListener{
JLabel messageInit = new JLabel("init");
 JLabel messageStart = new JLabel("Start");
 JLabel messageDisplay = new JLabel("Display");
 JLabel messageAction = new JLabel("Action");
 JLabel messageStop = new JLabel("Stop");
 JLabel messageDestroy = new JLabel("Destroy");
 JButton but = new JButton("Press");
 int countInit,countStart,countDisplay,countAction,countStop,countDestroy;
    public void init() {
       Container con = getContentPane();
       con.setLayout(new FlowLayout());
       countInit++;
       con.add(messageInit);
       con.add(messageStart);
       con.add(messageDisplay);
       con.add(messageStop);
       con.add(messageAction);
       con.add(messageDestroy);
       con.add(but);
       but.addActionListener(this);
       display();
    }
    public void start()
    {
        countStart++;
        display();
    }
    public void stop()
    {
        countStop++;
        display();
    }
    public void destroy()
    {
        countDestroy++;
        display();
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == but)
        {
            countAction++;
            display();
        }
    }
    public void display()
    {
        countDisplay++;
        messageInit.setText("init " + countInit);
        messageAction.setText("action " + countAction);
        messageDestroy.setText("destroy " + countDestroy);
        messageDisplay.setText("display " + countDisplay);
        messageStart.setText("start " + countStart);
        messageStop.setText("stop " + countStop);
    }
}
