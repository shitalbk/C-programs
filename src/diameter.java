/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import java.awt.BorderLayout;
import java.awt.Container;
import javax.swing.*;

public class diameter{
    
  public static void main(String[] args){
   JFrame f=new JFrame();
   JTextField field=new JTextField("shi",10);
   JPanel pan= new JPanel();
   JButton btn=new JButton("OK");
   f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   
   f.add(pan);
   pan.add(field);
   pan.add(btn);
   f.setVisible(true);
   f.setSize(200, 300);
  }
    
    
    
}