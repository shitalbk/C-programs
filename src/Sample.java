
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;

/*
 * To change this template, choose Tools | Templates and open the template in
 * the editor.
 */
/**
 *
 * @author shital
 */
public class Sample implements ActionListener{
boolean ischeck= true;
String first="";
JButton store,store2;
    public Sample() 
    {
        JButton c[] = new JButton[64];
        JFrame j = new JFrame();
        JButton b = new JButton();
      
        //JButton c = new JButton();
        GridLayout g = new GridLayout(8, 8);
        // b.setSize(50, 50);
        //c.setSize(50, 50);
        j.setLayout(g);
        for (int i = 0; i <= 63; i++) {
            c[i] = new JButton();
            int rand = (int)(Math.random()*10) + 1;
                    
            int col_ar= rand<=6 ? rand : 4;
            //ImageIcon ico= new ImageIcon("icons/" + col_ar + ".gif");         
           // c[i].setIcon(ico);
              Color[] col = new Color[] {Color.BLUE,
                                         Color.BLACK,
                                         Color.GREEN, 
                                         Color.MAGENTA, 
                                         Color.RED, 
                                         Color.PINK,  
                                         Color.ORANGE};
            j.getContentPane().add(c[i]);
            c[i].setBackground(col[col_ar]);
            c[i].addActionListener(this);
        }
        j.pack();
       
        j.setSize(600, 600);
        j.setVisible(true);
        j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    
    
    
    public static void main(String args[]) {
        Sample s = new Sample();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet.");
    }
}