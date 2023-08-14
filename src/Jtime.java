/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.util.*;

/**
 *
 * @author shital
 */
public class Jtime extends JApplet implements ActionListener{
    private AudioClip sound;
    private Color tan = new Color(255,204,102);
    private String lastTime = "";
    private ImageIcon eventLogo;
   JButton pressMe = new JButton("pressMe");
    public void init() {
        sound = getAudioClip( getCodeBase(),"event.au");
        eventLogo =new ImageIcon("event.gif");
        setBackground(Color.CYAN);
        Container con = getContentPane();
        con.setLayout(new FlowLayout());
        con.add(pressMe);
        pressMe.addActionListener(this);
    }
    public void paint(Graphics g)
    {
        Graphics2D gr = (Graphics2D)g;
        Font f = new Font("Monospaced", Font.BOLD, 20);
        gr.setFont(f);
        GregorianCalendar day = new GregorianCalendar();
        String time = day.getTime().toString();
        gr.setColor(Color.BLUE);
        gr.drawString(lastTime, 5, 75);
        gr.setColor(tan);
        gr.drawString(time, 5, 75);
        lastTime = time;
        eventLogo.paintIcon(this, g, 50, 120);
        gr.drawString("it's time to party", 50, 100);
        pressMe.repaint();
    }
    public void start()
    {
        sound.loop();
    }
    public void stop()
    {
        sound.stop();
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == pressMe)
        {
            repaint();
        }
    }
    }
    
