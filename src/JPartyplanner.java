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
public class JPartyplanner extends JApplet implements ActionListener {
    JLabel companyName = new JLabel("Event Handlers Incorporated");
    JLabel perPersonresult = new JLabel("Plan with us");
    JLabel totalresult = new JLabel("The more the merrier");
    JButton calcButton = new JButton("calculate");
    Font bigfont = new Font("Helvetica", Font.ITALIC,25);
    FlowLayout flow = new FlowLayout();
    public void init()
    {
       Container con = getContentPane();
       con.setLayout(flow);
       con.add(companyName);
       con.add(perPersonresult);
       con.add(totalresult);
       con.add(calcButton);
       companyName.setFont(bigfont);
       calcButton.addActionListener(this);
    }
    public void start()
    {
        perPersonresult.setText("plan with us");
        totalresult.setText("The more the merrier");
       // repaint();
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == calcButton)
        {
            String response = JOptionPane.showInputDialog(null,"Enter the number of guests");
            int [] guestLimit =   {0, 25, 50, 100, 200, 500, 1000};
            int [] ratePerGuest = {27, 25, 22, 19   ,17, 14,   11};
            int guests = Integer.parseInt(response);
            int individualFee =0 ,eventFee =0 ;
            int x = 0;
            for(x = 0;x<=6;x++)
            {
               if(guests >= guestLimit[x])
               {
                individualFee = ratePerGuest[x];
                eventFee = guests * individualFee;
               }
                perPersonresult.setText("$ " + individualFee + "per person");
                totalresult.setText("Event cost $ " + eventFee);
            }
        }
    }
    
}
 