/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.awt.event.*;
import java.awt.Color;
import java.awt.Font;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.TextField;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JTextField;


/**
 *
 * @author shital
 */
public class Jgreet2 extends JApplet implements ActionListener {
 JLabel j = new JLabel("Everything ends and destroys");
 Font f = new Font("Arial" , Font.ITALIC,30);
 JTextField text = new JTextField(25);
 JLabel label = new JLabel("");
 JButton but = new JButton("Thich Malai");
 FlowLayout flow = new FlowLayout();
    public void init() {
        Container con = getContentPane();
        con.add(j);
        j.setFont(f);
        con.add(text);
        con.add(but);
        con.setLayout(flow);
        con.add(label);
        but.addActionListener(this);
        text.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
        Object source = e.getSource();
        if(source == but)
        {
           String name = text.getText();
           label.setText("Hi there " + name);
        }
        else if(source instanceof TextField)
        {
            String name  = text.getText();
            
        }
        remove(text);
        remove(but);
       repaint();
    }
   
}
