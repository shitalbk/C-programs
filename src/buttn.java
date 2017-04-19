
import java.awt.Color;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class buttn {
    public buttn()
    {
      JFrame j = new JFrame("Bejewwled");
      JButton bt[] = new JButton[64];
      JButton b = new JButton();
      GridLayout g  = new GridLayout(8,8);
      
      
      for(int i = 0;i<64;i++)
      {
         bt[i] = new JButton();
        j.getContentPane().add(bt[i]); 
        Color c[] =new Color[]{Color.CYAN,Color.BLACK,Color.BLUE,Color.GREEN,Color.ORANGE,Color.PINK,Color.RED};
        int rand = (int)(Math.random()*10);
        if(rand<7)
            bt[i].setBackground(c[rand]);
        else
            bt[i].setBackground(c[5]);
        
      }
      
      j.setLayout(g);
      j.setSize(600, 600);
      j.setVisible(true);
      j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String args[])
    {
       buttn n = new buttn(); 
    }
    
}
