
import java.awt.Image;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

/*
 * To change this template, choose Tools | Templates and open the template in
 * the editor.
 */
/**
 *
 * @author shital
 */
public class Jbuttontest {

    public Jbuttontest() {
       
        
             JFrame f = new JFrame();
        JPanel p = new JPanel();
            //Image img = ImageIO.read(getClass().getResource());
            ImageIcon i = new ImageIcon("./src/6.gif");
            
        JButton j = new JButton(i);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setSize(500, 500);
        p.add(j);
        f.add(p);


        f.setVisible(true);
      

        
        
    }

    public static void main(String args[]) {
        Jbuttontest j= new Jbuttontest();
    }
}
